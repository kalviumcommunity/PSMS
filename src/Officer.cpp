#include "Officer.h"

Officer::Officer(int officerID, const string& firstName, const string& lastName, const string& rank,
                 const string& badgeNumber, const string& contactInfo, const string& employmentStartDate,
                 const string& employmentEndDate, int roleID)
    : officerID(officerID), firstName(firstName), lastName(lastName), rank(rank), badgeNumber(badgeNumber),
      contactInfo(contactInfo), employmentStartDate(employmentStartDate), employmentEndDate(employmentEndDate), roleID(roleID) {}

int Officer::getOfficerID() const { return officerID; }
string Officer::getFirstName() const { return firstName; }
string Officer::getLastName() const { return lastName; }
string Officer::getRank() const { return rank; }
string Officer::getBadgeNumber() const { return badgeNumber; }
string Officer::getContactInfo() const { return contactInfo; }
string Officer::getEmploymentStartDate() const { return employmentStartDate; }
string Officer::getEmploymentEndDate() const { return employmentEndDate; }
int Officer::getRoleID() const { return roleID; }
