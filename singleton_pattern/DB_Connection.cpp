#pragma once
#include "DB_Connection.hpp"
#include<iostream>
#include<mutex>

int DB_Connection::cnt =0;
DB_Connection* DB_Connection::instance = nullptr;
mutex DB_Connection::mtx;

DB_Connection::DB_Connection() {
    cnt++;
    std::cout<<"DB Connection Instanciated, instance number: "<<cnt<<"\n";
}

DB_Connection* DB_Connection::getInstance() {
    if(instance==nullptr) {
        mtx.lock();
        if(instance==nullptr) instance = new DB_Connection();
        mtx.unlock();
    }
    return instance;
}

void DB_Connection::createTable(const char* s) {
    std::cout<<"New Table "<<s<<" Created"<<"\n";
}


