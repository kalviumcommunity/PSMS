// Case.h
#ifndef CASE_H
#define CASE_H

#include <string>
#include <iostream>

using namespace std;
class Case {
public:
    Case(int caseID, const string& title, const string& description, const string& status,
         const string& openDate, const string& closeDate, int assignedOfficerID, int caseCategoryID, int reportID)
        : caseID(caseID), title(title), description(description), status(status), openDate(openDate),
          closeDate(closeDate), assignedOfficerID(assignedOfficerID), caseCategoryID(caseCategoryID), reportID(reportID) {}

    // Getter methods
    int getCaseID() const { return caseID; }
    string getTitle() const { return title; }
    string getDescription() const { return description; }
    string getStatus() const { return status; }
    string getOpenDate() const { return openDate; }
    string getCloseDate() const { return closeDate; }
    int getAssignedOfficerID() const { return assignedOfficerID; }
    int getCaseCategoryID() const { return caseCategoryID; }
    int getReportID() const { return reportID; }

private:
    int caseID;
    string title;
    string description;
    string status;
    string openDate;
    string closeDate;
    int assignedOfficerID;
    int caseCategoryID;
    int reportID;
};

#endif
