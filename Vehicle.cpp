#include <iostream>
#include <string>
#include "Vehicle.h"
using std::string;
using std::cout;
using std::endl;

namespace SavitchEmployees {
    Vehicle::Vehicle(){
    }

    Vehicle::Vehicle(string model, int engine, Person VehicleOwner) {
        make=model;
        cylinders=engine;
        owner=VehicleOwner.getName();
    }

    Vehicle::Vehicle(const Vehicle &b) {
        make=b.make;
        cylinders=b.cylinders;
        owner=b.owner;
    }

    string Vehicle::getMake(){
        return make;
    }

    int Vehicle::getCylinders(){
        return cylinders;
    }

    string Vehicle::getOwnerName(){
        return owner.getName();
    }

    Person Vehicle::getOwner(){

        return owner;

    }
    void Vehicle::operator =(const Vehicle& b){
        make=b.make;
        cylinders=b.cylinders;
        owner=b.owner;
    }



}