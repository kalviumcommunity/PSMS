// OfficerCount.cpp
#include "OfficerCount.h"
using namespace std;

int OfficerCount::totalOfficers = 0;

int OfficerCount::getTotalOfficersCount() {
    return totalOfficers;
}

void OfficerCount::incrementTotalOfficers() {
    totalOfficers++;
}