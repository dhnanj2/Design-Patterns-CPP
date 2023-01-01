#pragma once    //same as ifndef.....

#include "Car.cpp"
#include "Bike.cpp"

class VehicleFactory
{
    public:
    static Vehicle* getVehicle(const char*);
};
