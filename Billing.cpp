#include <iostream>
#include <string>
#include "Patient.h"
#include "Person.h"
#include "Doctor.h"
#include "Billing.h"
using std::string;
using std::cout;
using std::endl;

namespace SavitchEmployees {
    Billing::Billing(){

    }
    Billing::Billing(const Patient& p, const Doctor& d, const double& c){
        pat=p;
        doc=d;
        cost=c;
    }
    Billing::Billing(const Billing& b){
        pat=b.pat;
        doc=b.doc;
        cost=b.cost;
    }
    string Billing::getPatientName(){
        return pat.getName();
    }

    double Billing::getCost() {
        return cost;
    }
    void Billing::operator =(const Billing& b){
        pat=b.pat;
        doc=b.doc;
        cost=b.cost;
    }




}

