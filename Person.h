
#ifndef PERSON_H
#define PERSON_H

#include <string>
using std::string;
using std::istream;
using std::ostream;

namespace SavitchEmployees
{
    class Person{
    public:
        Person();
        Person(string theName);
        Person(const Person& theObject);
        string getName() const;
        Person& operator= (const Person& rtside);
        friend istream& operator >> (istream& inStream, Person& personObject);
        friend ostream& operator << (ostream& outStream, const Person& personObject);
    private:
        string name;
    };
}
#endif //INC_60_HW4_PERSON_H
