// Person.cpp
#include "Person.h"
using namespace std;

Person::Person(int personID, const string& firstName, const string& lastName, const string& contactInfo)
    : personID(personID), firstName(firstName), lastName(lastName), contactInfo(contactInfo) {}

Person::~Person() {}

int Person::getPersonID() const {
    return personID;
}

string Person::getFirstName() const {
    return firstName;
}

string Person::getLastName() const {
    return lastName;
}

string Person::getContactInfo() const {
    return contactInfo;
}
