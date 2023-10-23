#include "Officer.h"

// Initialize the static member variable
int Officer::totalOfficers = 0;

// Constructor implementation
Officer::Officer(int officerID, const string &firstName, const string &lastName, const string &rank,
                 const string &badgeNumber, const string &contactInfo, const string &employmentStartDate,
                 const string &employmentEndDate, int rankID)
    : officerID(officerID), firstName(firstName), lastName(lastName), rank(rank), badgeNumber(badgeNumber),
      contactInfo(contactInfo), employmentStartDate(employmentStartDate), employmentEndDate(employmentEndDate), rankID(rankID)
{
  totalOfficers++; // Increment the totalOfficers count when a new Officer object is created
}

// Destructor implementation
Officer::~Officer()
{
}

// Getter methods implementation
int Officer::getOfficerID() const { return this->officerID; }
string Officer::getFirstName() const { return this->firstName; }
string Officer::getLastName() const { return this->lastName; }
string Officer::getRank() const { return this->rank; }
string Officer::getBadgeNumber() const { return this->badgeNumber; }
string Officer::getContactInfo() const { return this->contactInfo; }
string Officer::getEmploymentStartDate() const { return this->employmentStartDate; }
string Officer::getEmploymentEndDate() const { return this->employmentEndDate; }
int Officer::getRankID() const { return this->rankID; }
int Officer::getTotalOfficersCount() { return totalOfficers; }
