#include <iostream>
#include <string>
#include "Truck.h"
#include "Vehicle.h"
using std::string;
using std::cout;
using std::endl;

namespace SavitchEmployees {
    Truck::Truck() : Vehicle (){
        load;
        towing;
    }

    Truck::Truck(string model, int engine, Person VehicleOwner, double load_capacity, int towing_capacity) : Vehicle(model, engine,  VehicleOwner){
        load=load_capacity;
        towing=towing_capacity;
    }

    Truck::Truck(Truck &b) : Vehicle(b.getMake(),b.getCylinders(),b.getOwner( )){
        load=b.load;
        towing=b.towing;
    }

    double Truck::getLoad() {
        return load;
    }

    int Truck::getTowing() {
        return towing;
    }

    void Truck::operator =(const Truck& b){
        load=b.load;
        towing=b.towing;
    }
}
