#pragma once

#include "VehicleFactory.hpp"

Vehicle* VehicleFactory::getVehicle(const char *s)
{
    Vehicle *vehicle = nullptr;

    if(s=="Bike") {
        vehicle = new Bike();
    }else if(s=="Car") {
        vehicle = new Car();
    }else {
        std::cout<<"Vehicle not available!!\n";
    }
    
    return vehicle;
}