#ifndef PATIENT_H
#define PATIENT_H

#include "Person.h"
#include "Doctor.h"
#include <string>
using std::string;

namespace SavitchEmployees {
    class Patient : public Person {
    public:
        Patient();
        Patient(const Person& p, const Doctor& d);
        Patient(const Patient& b);              //Makes a copy of Patient b
        string getName();                       //returns Patient's name
        void operator =(const Patient& b);      //assigns given Patient equal to Patient b
    private:
        string name;                            //tracks Patient's name
        Doctor physician;                       //tracks Patient's physician
    };
}


#endif //INC_60_HW4_PATIENT_H
