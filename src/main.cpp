#include "Case.h"
#include "Officer.h"
#include "Report.h"

int main() {
    // Create instances of your classes using constructors
    Case myCase(1, "Example Case", "Description", "Open", "2023-09-25", "2023-09-30", 101, 1, 201);
    Officer myOfficer(101, "Somendra", "Swaroop", "Sergeant", "12345", "somendra@swaroop.com", "2022-01-15", "", 1);
    Report myReport(201, "Report", "Report description", 101, "2023-09-25", "Type A", 1);

    // Access and use the class members
    cout << "Case ID: " << myCase.getCaseID() << endl;
    cout << "Officer Name: " << myOfficer.getFirstName() << " " << myOfficer.getLastName() << endl;
    cout << "Report Title: " << myReport.getReportTitle() << endl;

    return 0;
}
