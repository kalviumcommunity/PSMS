// Report.h
#ifndef REPORT_H
#define REPORT_H

#include <string>
#include <iostream>

using namespace std;

class Report {
public:
    Report(int reportID, const string& reportTitle, const string& reportDescription,
           int authorOfficerID, const string& reportDate, const string& reportType, int caseID)
        : reportID(reportID), reportTitle(reportTitle), reportDescription(reportDescription),
          authorOfficerID(authorOfficerID), reportDate(reportDate), reportType(reportType), caseID(caseID) {}

    // Getter methods
    int getReportID() const { return reportID; }
    string getReportTitle() const { return reportTitle; }
    string getReportDescription() const { return reportDescription; }
    int getAuthorOfficerID() const { return authorOfficerID; }
    string getReportDate() const { return reportDate; }
    string getReportType() const { return reportType; }
    int getCaseID() const { return caseID; }

private:
    int reportID;
    string reportTitle;
    string reportDescription;
    int authorOfficerID;
    string reportDate;
    string reportType;
    int caseID;
};

#endif
