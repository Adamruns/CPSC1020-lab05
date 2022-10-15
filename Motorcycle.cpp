//Jay Thompson

#include <iostream>
#include <string>
#include "Motorcycle.h"

using namespace std;


string Motorcycle::getMake() {
    return make;
}

bool Motorcycle::setMake(string mk) {
    if (mk.size() < 100 || mk.size() > 0) {
        make = mk;
        return true;
    }
    else {
        return false;
    }
}

string Motorcycle::getModel() {
    return model;
}

bool Motorcycle::setModel(string md){
    if (md.size() < 100 || md.size() > 0) {
        model = md;
        return true;
    }
    else {
        return false;
    }
}

int Motorcycle::getYear() {
    return year;
}

bool Motorcycle::setYear(int y) {
    if (y > 0) {
        year = y;
        return true;
    }
    else {
        return false;
    }
}

int Motorcycle::getNumTires() {
    return numTires;
}

bool Motorcycle::setNumTires(int nt) {
      if (nt > 0 && nt < 4) {
        numTires = nt;
        return true;
    }
    else {
        return false;
    }
}

double Motorcycle::getEngineSize() {
    return engineSize;
}

bool Motorcycle::setEngineSize(double es) {
      if (es > 0.0) {
        engineSize = es;
        return true;
    }
    else {
        return false;
    }
}

Motorcycle::Motorcycle(string make, string model, int year, int numTires, double engineSize) {
    setMake(make);
    setModel(model);
    setYear(year);
    setEngineSize(engineSize);
    setNumTires(numTires);
}

Motorcycle::Motorcycle() {
    setMake("Test");
    setModel("Test");
    setYear(2000);
    setEngineSize(0.0);
    setNumTires(0);
}

string Motorcycle::printMotorcycleInfo(string type){
    string returnString = "\nCar Info\nCar Type:" + type + "\nMake: " + make + "\nModel: " + model + "\nYear: " + to_string(year) + "\nEngine Size: " + to_string(engineSize) + "\nNumber of Tires: " + to_string(numTires) + "\n";
    return returnString;
}