//Jay Thompson

#ifndef MOTORCYCLE_H
#define MOTORCYCLE_H

#include <string>
using namespace std;

class Motorcycle {

private:
    std::string make;
    std::string model;
    int year;
    int numTires;
    double engineSize;

public:
    std::string getMake();
    bool setMake(std::string mk);
    std::string getModel();
    bool setModel(std::string md);
    int getYear();
    bool setYear(int year);
    int getNumTires();
    bool setNumTires(int nt);
    double getEngineSize();
    bool setEngineSize(double es);
    string printMotorcycleInfo(string);
    Motorcycle();
    Motorcycle(string,string,int,int,double);
};


#endif