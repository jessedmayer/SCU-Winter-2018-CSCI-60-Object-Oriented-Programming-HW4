#include <iostream>
#include <string>
#include "Person.h"
using std::string;
using std::cout;
using std::endl;
using std::istream;
using std::ostream;

namespace SavitchEmployees
{
    Person::Person() {
        name;
    }
    Person::Person(string theName){
        name=theName;
    }
    Person::Person(const Person& theObject){

    }
    string Person::getName() const{
        return name;
    }
    Person& Person::operator= (const Person& rtside){
        name=rtside.name;
    }
    istream& operator >> (istream& inStream, Person& personObject){
        inStream >> personObject.name;
        return inStream;
    }
    ostream& operator << (ostream& outStream, const Person& personObject){
        outStream << personObject.name;
        return outStream;
    }
}
