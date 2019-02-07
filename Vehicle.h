#ifndef VEHICLE_H
#define VEHICLE_H
#include "Person.h"
#include <string>
using std::string;

namespace SavitchEmployees {
    class Vehicle{
    public:
        Vehicle();
        Vehicle(string model, int engine, Person VehicleOwner);
        Vehicle (const Vehicle& b);             // Makes a copy of Vehicle b
        string getMake();                       //returns Vehicle make
        int getCylinders();                     //returns Vehicle's number of cylinders
        string getOwnerName();                  //returns owner's name
        Person getOwner();                      //returns owner in Person form
        void operator =(const Vehicle& b);      //assigns given Truck equal to Truck b
    private:
        string make;                            //tracks Vehicle make
        int cylinders;                          //tracks Vehicle's number of cylinders
        Person owner;                           //tracks Vehicle's owner
    };
}
#endif //INC_60_HW4_VEHICLE_H
