#pragma once
#include<mutex>
using namespace std;

class DB_Connection {
    static DB_Connection *instance;
    static int cnt;
    static mutex mtx;

    // privtise all the constructors of the class
    DB_Connection();
    DB_Connection(const DB_Connection &);
    DB_Connection operator=(const DB_Connection &);

    public:
    
        static DB_Connection* getInstance();
        void createTable(const char*);
};