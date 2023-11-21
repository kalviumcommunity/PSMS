// Officer.cpp
#include "Officer.h"
#include "OfficerCount.h"
using namespace std;

Officer::Officer(int officerID, const string& firstName, const string& lastName, const string& rank,
                 const string& badgeNumber, const string& contactInfo, const string& employmentStartDate,
                 const string& employmentEndDate, int rankID)
    : Person(officerID, firstName, lastName, contactInfo),
      rank(rank), badgeNumber(badgeNumber), employmentStartDate(employmentStartDate),
      employmentEndDate(employmentEndDate), rankID(rankID)
{
    OfficerCount::incrementTotalOfficers();
}

Officer::~Officer() {}

string Officer::getRank() const {
    return rank;
}

string Officer::getBadgeNumber() const {
    return badgeNumber;
}

string Officer::getEmploymentStartDate() const {
    return employmentStartDate;
}

string Officer::getEmploymentEndDate() const {
    return employmentEndDate;
}

int Officer::getRankID() const {
    return rankID;
}

int Officer::getOfficerID() const {
    return getPersonID();
}
