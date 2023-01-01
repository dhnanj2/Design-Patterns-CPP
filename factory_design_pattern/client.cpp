#include "VehicleFactory.cpp"

using namespace std;

int main ()
{
    auto car = VehicleFactory::getVehicle("Car");
    auto bike = VehicleFactory::getVehicle("Bike");
    auto scooter = VehicleFactory::getVehicle("Scooter");
    car->createVehicle();
    bike->createVehicle();
    return 0;
}