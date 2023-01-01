#include "DB_Connection.cpp"
#include <iostream>
#include <thread>

using namespace std;

void table1() {
    auto connection1 = DB_Connection::getInstance();
    connection1->createTable("Appliance");
}

void table2() {
    auto connection2 = DB_Connection::getInstance();
    connection2->createTable("Fashion");
}

int main()
{
    // creating multiple threads to test thread safety
    thread t1(table1);
    thread t2(table2);
    t1.join();    
    t2.join();    
    return 0;
}