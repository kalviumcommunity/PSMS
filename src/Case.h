// Case.h
#ifndef CASE_H
#define CASE_H

#include <string>
#include <iostream>

using namespace std;

class Case {
public:
    // Constructor
    Case(int caseID, const string& title, const string& description, const string& status,
         const string& openDate, const string& closeDate, int assignedOfficerID, int caseCategoryID, int reportID);

    // Destructor
    ~Case();

    // Getter methods
    int getCaseID() const;
    string getTitle() const;
    string getDescription() const;
    string getStatus() const;
    string getOpenDate() const;
    string getCloseDate() const;
    int getAssignedOfficerID() const;
    int getCaseCategoryID() const;
    int getReportID() const;

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
