// Case.cpp
#include "Case.h"

// Constructor implementation
Case::Case(int caseID, const string& title, const string& description, const string& status,
     const string& openDate, const string& closeDate, int assignedOfficerID, int caseCategoryID, int reportID)
    : caseID(caseID), title(title), description(description), status(status), openDate(openDate),
      closeDate(closeDate), assignedOfficerID(assignedOfficerID), caseCategoryID(caseCategoryID), reportID(reportID) {}

// Destructor implementation
Case::~Case() {
}

// Getter methods implementation
int Case::getCaseID() const { return this->caseID; }
string Case::getTitle() const { return this->title; }
string Case::getDescription() const { return this->description; }
string Case::getStatus() const { return this->status; }
string Case::getOpenDate() const { return this->openDate; }
string Case::getCloseDate() const { return this->closeDate; }
int Case::getAssignedOfficerID() const { return this->assignedOfficerID; }
int Case::getCaseCategoryID() const { return this->caseCategoryID; }
int Case::getReportID() const { return this->reportID; }
