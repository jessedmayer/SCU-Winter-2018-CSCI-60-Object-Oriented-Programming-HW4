
//#ifndef INC_60_HW4_DOCTOR_H
//#define INC_60_HW4_DOCTOR_H
#ifndef DOCTOR_H
#define DOCTOR_H

#include <string>
#include "employee.h"
#include "salariedemployee.h"

using std::string;

namespace SavitchEmployees
{

    class Doctor : public SalariedEmployee
    {
    public:
        Doctor( );
        Doctor (const string&  theName, const string&  theSsn, const double& theWeeklySalary, const string& skill, const double& cost);
        Doctor (const Doctor& b);       // Makes a copy of Doctor b
        string getSpecialty();          //returns specialty
        double getFee();                //returns fee
        void operator =(const Doctor& b);       //Sets given Doctor equal to Doctor b
        void printcheck();
    private:
        string specialty;               //tracks doctors medical specialty
        double fee;                     //tracks fee of visiting doctor
    };

}//Doctor

#endif //INC_60_HW4_DOCTOR_H
