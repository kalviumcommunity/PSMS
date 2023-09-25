// Officer.h
#ifndef OFFICER_H
#define OFFICER_H

#include <string>
#include <iostream> // Include for standard input/output

using namespace std; // Add using namespace std; to simplify usage

class Officer {
public:
    Officer(int officerID, const string& firstName, const string& lastName, const string& rank,
            const string& badgeNumber, const string& contactInfo, const string& employmentStartDate,
            const string& employmentEndDate, int roleID)
        : officerID(officerID), firstName(firstName), lastName(lastName), rank(rank), badgeNumber(badgeNumber),
          contactInfo(contactInfo), employmentStartDate(employmentStartDate), employmentEndDate(employmentEndDate), roleID(roleID) {}

    // Getter methods
    int getOfficerID() const { return officerID; }
    string getFirstName() const { return firstName; }
    string getLastName() const { return lastName; }
    string getRank() const { return rank; }
    string getBadgeNumber() const { return badgeNumber; }
    string getContactInfo() const { return contactInfo; }
    string getEmploymentStartDate() const { return employmentStartDate; }
    string getEmploymentEndDate() const { return employmentEndDate; }
    int getRoleID() const { return roleID; }

private:
    int officerID;
    string firstName;
    string lastName;
    string rank;
    string badgeNumber;
    string contactInfo;
    string employmentStartDate;
    string employmentEndDate;
    int roleID;
};

#endif
