#include <iostream>
#include <string>
#include "doctor.h"
using std::string;
using std::cout;
using std::endl;

namespace SavitchEmployees
{
    Doctor::Doctor( ) : SalariedEmployee( )
    {
        //deliberately empty
    }

    Doctor::Doctor(const string&  theName, const string&  theSsn, const double& theWeeklySalary, const string& skill, const double& cost)
            : SalariedEmployee ( theName, theSsn, theWeeklySalary)
    {
        specialty=skill;
        fee=cost;
    }

    Doctor::Doctor (const Doctor& b) : SalariedEmployee ()
    {
        specialty=b.specialty;
        fee=b.fee;
    }

    string Doctor::getSpecialty()
    {
        return specialty;
    }

    double Doctor::getFee()
    {
        return fee;
    }
    void Doctor::operator =(const Doctor& b){     //Makes a copy of classList using the assign operator
        specialty=b.specialty;
        fee=b.fee;
    }
    void Doctor::printcheck() {
        SalariedEmployee::printCheck();
    }


   /* void SalariedEmployee::printCheck( )
    {
        setNetPay(salary);
        cout << "\n__________________________________________________\n";
        cout << "Pay to the order of " << getName( ) << endl;
        cout << "The sum of " << getNetPay( ) << " Dollars\n";
        cout << "_________________________________________________\n";
        cout << "Check Stub NOT NEGOTIABLE \n";
        cout << "Employee Number: " << getSsn( ) << endl;
        cout << "Salaried Employee. Regular Pay: "
             << salary << endl;
        cout << "_________________________________________________\n";
    }*/
}//SavitchEmployees

