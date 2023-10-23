// Report.cpp
#include "Report.h"

// Constructor implementation
Report::Report(int reportID, const string& reportTitle, const string& reportDescription,
               int authorOfficerID, const string& reportDate, const string& reportType, int caseID)
    : reportID(reportID), reportTitle(reportTitle), reportDescription(reportDescription),
      authorOfficerID(authorOfficerID), reportDate(reportDate), reportType(reportType), caseID(caseID) {}

// Destructor implementation
Report::~Report() {
}

// Getter methods implementation
int Report::getReportID() const { return reportID; }
string Report::getReportTitle() const { return reportTitle; }
string Report::getReportDescription() const { return reportDescription; }
int Report::getAuthorOfficerID() const { return authorOfficerID; }
string Report::getReportDate() const { return reportDate; }
string Report::getReportType() const { return reportType; }
int Report::getCaseID() const { return caseID; }
