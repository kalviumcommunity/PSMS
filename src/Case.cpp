#include "Case.h"

Case::Case(int caseID, const string &title, const string &description, const string &status,
           const string &openDate, const string &closeDate, int assignedOfficerID, int caseCategoryID, int reportID)
    : caseID(caseID), title(title), description(description), status(status), openDate(openDate),
      closeDate(closeDate), assignedOfficerID(assignedOfficerID), caseCategoryID(caseCategoryID), reportID(reportID) {}

int Case::getCaseID() const { return caseID; }
string Case::getTitle() const { return title; }
string Case::getDescription() const { return description; }
string Case::getStatus() const { return status; }
string Case::getOpenDate() const { return openDate; }
string Case::getCloseDate() const { return closeDate; }
int Case::getAssignedOfficerID() const { return assignedOfficerID; }
int Case::getCaseCategoryID() const { return caseCategoryID; }
int Case::getReportID() const { return reportID; }
