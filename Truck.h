#ifndef TRUCK_H
#define TRUCK_H
#include "Person.h"
#include "Vehicle.h"
#include <string>
using std::string;

namespace SavitchEmployees {
    class Truck : public Vehicle {
    public:
        Truck();
        Truck(string model, int engine, Person VehicleOwner, double load_capacity, int towing_capacity);
        Truck(Truck& b);        //Makes a copy of Truck b
        double getLoad();       //returns load capacity
        int getTowing();        //returns towing capacity
        void operator =(const Truck& b);    //assigns given Truck equal to Truck b
    private:
        double load;            //tracks load capacity
        int towing;             //tracks towing capacity
    };
}
#endif //INC_60_HW4_TRUCK_H
