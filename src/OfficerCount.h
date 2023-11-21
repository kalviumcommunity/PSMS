// OfficerCount.h
#ifndef OFFICER_COUNT_H
#define OFFICER_COUNT_H
using namespace std;

class OfficerCount {
public:
    static int getTotalOfficersCount();
    static void incrementTotalOfficers();

private:
    static int totalOfficers;
};

#endif