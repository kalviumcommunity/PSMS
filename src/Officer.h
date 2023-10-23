// Officer.h
#ifndef OFFICER_H
#define OFFICER_H

#include <string>
#include <iostream>

using namespace std;

class Officer {
public:
    // Constructor
    Officer(int officerID, const string& firstName, const string& lastName, const string& rank,
            const string& badgeNumber, const string& contactInfo, const string& employmentStartDate,
            const string& employmentEndDate, int rankID);

    // Destructor
    ~Officer();

    // Getter methods
    int getOfficerID() const;
    string getFirstName() const;
    string getLastName() const;
    string getRank() const;
    string getBadgeNumber() const;
    string getContactInfo() const;
    string getEmploymentStartDate() const;
    string getEmploymentEndDate() const;
    int getRankID() const;

private:
    int officerID;
    string firstName;
    string lastName;
    string rank;
    string badgeNumber;
    string contactInfo;
    string employmentStartDate;
    string employmentEndDate;
    int rankID;
};

#endif
