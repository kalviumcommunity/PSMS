#include "Case.h"
#include "Officer.h"
#include "Report.h"
#include <iostream>

int main() {
    // Create an array of Case objects with dynamic memory allocation
    Case* cases[3];
    
    // Create an array of Officer objects with dynamic memory allocation
    Officer* officers[3];

    // Create an array of Report objects with dynamic memory allocation
    Report* reports[3];

    // Populate the arrays with data for cases, officers, and reports
    for (int i = 0; i < 3; i++) {
        // Creating Case objects with dynamic memory allocation
        cases[i] = new Case(i + 1, "Example Case " + to_string(i + 1), "Description " + to_string(i + 1), "Open",
                            "2023-09-25", "", 101 + i, 1, 201 + i);

        // Creating Officer objects with dynamic memory allocation
        officers[i] = new Officer(i + 1, "First Name " + to_string(i), "Last Name " + to_string(i), "Rank " + to_string(i),
                                  "Badge " + to_string(i), "Contact Info " + to_string(i), "2023-01-01", "", 1 + i);

        // Creating Report objects with dynamic memory allocation
        reports[i] = new Report(i + 1, "Report Title " + to_string(i + 1), "Report Description " + to_string(i + 1),
                                101 + i, "2023-09-30", "Type " + to_string(i + 1), 201 + i);
    }

    // Access and use the class members and the static variables

    for (int i = 0; i < 3; i++) {
        // Accessing the encapsulated data and behavior through getter methods
        cout << "Case ID: " << cases[i]->getCaseID() << endl;
        cout << "Officer ID: " << officers[i]->getOfficerID() << endl;
        cout << "Report ID: " << reports[i]->getReportID() << endl;
    }

    // Access the totalCases, totalOfficers, and totalReports static variables
    cout << "Total Cases: " << Case::totalCases << endl;
    cout << "Total Officers: " << Officer::totalOfficers << endl;
    cout << "Total Reports: " << Report::totalReports << endl;

    // Deallocate the dynamically allocated memory to prevent memory leaks
    for (int i = 0; i < 3; i++) {
        delete cases[i];
        delete officers[i];
        delete reports[i];
    }

    return 0;
}
