// Officer.h
#ifndef OFFICER_H
#define OFFICER_H

#include "Person.h"
#include "OfficerCount.h"
using namespace std;

class Officer : public Person {
public:
    // Constructor
    Officer(int officerID, const string& firstName, const string& lastName, const string& rank,
            const string& badgeNumber, const string& contactInfo, const string& employmentStartDate,
            const string& employmentEndDate, int rankID);

    // Destructor
    ~Officer();

    // Getter methods specific to Officer
    string getRank() const;
    string getBadgeNumber() const;
    string getEmploymentStartDate() const;
    string getEmploymentEndDate() const;
    int getRankID() const;

    // Public method to access officerID
    int getOfficerID() const;

private:
    string rank;
    string badgeNumber;
    string employmentStartDate;
    string employmentEndDate;
    int rankID;
};

#endif
