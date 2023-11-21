// Person.h
#ifndef PERSON_H
#define PERSON_H
using namespace std;

#include <string>

class Person {
public:
    // Constructor
    Person(int personID, const string& firstName, const string& lastName, const string& contactInfo);

    // Destructor
    virtual ~Person();

    // Getter methods
    int getPersonID() const;
    string getFirstName() const;
    string getLastName() const;
    string getContactInfo() const;

private:
    int personID;
    string firstName;
    string lastName;
    string contactInfo;
};

#endif
