// Report.h
#ifndef REPORT_H
#define REPORT_H

#include <string>
#include <iostream>

using namespace std;

class Report {
public:
    // Constructor
    Report(int reportID, const string& reportTitle, const string& reportDescription,
           int authorOfficerID, const string& reportDate, const string& reportType, int caseID);

    // Destructor
    ~Report();

    // Getter methods
    int getReportID() const;
    string getReportTitle() const;
    string getReportDescription() const;
    int getAuthorOfficerID() const;
    string getReportDate() const;
    string getReportType() const;
    int getCaseID() const;

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
