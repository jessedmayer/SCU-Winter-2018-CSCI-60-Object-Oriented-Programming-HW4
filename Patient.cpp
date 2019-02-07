#include <iostream>
#include <string>
#include "Patient.h"
#include "Person.h"
#include "Doctor.h"
using std::string;
using std::cout;
using std::endl;

namespace SavitchEmployees {
    Patient::Patient(){
    }

    Patient::Patient(const Person& p, const Doctor& d) {
        name=p.getName();
        physician=d;
    }

    Patient::Patient(const Patient &b) {
        name=b.name;
        physician=b.physician;
    }

    string Patient::getName() {
        return name;
    }

    void Patient::operator =(const Patient& b){
        name=b.name;
        physician=b.physician;
    }

}

