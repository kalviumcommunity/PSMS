// Officer.cpp
#include "Officer.h"

// Constructor implementation
Officer::Officer(int officerID, const string& firstName, const string& lastName, const string& rank,
                 const string& badgeNumber, const string& contactInfo, const string& employmentStartDate,
                 const string& employmentEndDate, int rankID)
    : officerID(officerID), firstName(firstName), lastName(lastName), rank(rank), badgeNumber(badgeNumber),
      contactInfo(contactInfo), employmentStartDate(employmentStartDate), employmentEndDate(employmentEndDate), rankID(rankID) {}

// Destructor implementation
Officer::~Officer() {
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
