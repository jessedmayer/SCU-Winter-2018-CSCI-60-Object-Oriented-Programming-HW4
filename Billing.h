#ifndef BILLING_H
#define BILLING_H

#include "Person.h"
#include "Doctor.h"
#include "Patient.h"
#include <string>
using std::string;

namespace SavitchEmployees {
    class Billing {
    public:
        Billing();
        Billing(const Patient& p, const Doctor& d, const double& c);
        Billing(const Billing& b);              //makes a copy of Billing b
        string getPatientName();                //returns Patient's name
        double getCost();                       //returns Billing cost
        void operator =(const Billing& b);      //assigns given Billing equal to Billing b

    private:
        Patient pat;                            //tracks Billing's patient
        Doctor doc;                             //tracks Billing's doctor
        double cost;                            //tracks Billing's cost
    };





}




#endif //INC_60_HW4_BILLING_H
