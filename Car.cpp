// Adam Smith

#include <iostream>
#include <string>
#include "Car.h"

using namespace std;

string Car::getMake() {
    return make;
}

bool Car::setMake(string mk) {
    if (mk.size() < 100 || mk.size() > 0) {
        make = mk;
        return true;
    }
    else {
        return false;
    }
}

string Car::getModel() {
    return model;
}

bool Car::setModel(string md){
    if (md.size() < 100 || md.size() > 0) {
        model = md;
        return true;
    }
    else {
        return false;
    }
}

int Car::getYear() {
    return year;
}

bool Car::setYear(int y) {
    if (y > 1800 && y < 2025) {
        year = y;
        return true;
    }
    else {
        return false;
    }
}

double Car::getAcceleration60() {
    return acceleration60;
}

bool Car::setAcceleration60(double a60) {
      if (a60 > 0.0 && a60 < 30.0) {
        acceleration60 = a60;
        return true;
    }
    else {
        return false;
    }
}

int Car::getNumberOfDoors() {
    return numberOfDoors;
}

bool Car::setNumberOfDoors(int nd) {
      if (nd > 0) {
        numberOfDoors = nd;
        return true;
    }
    else {
        return false;
    }
}

Car::Car(string make, string model, int year, double acceleration60, double numberOfDoors) {
    setMake(make);
    setModel(model);
    setYear(year);
    setAcceleration60(acceleration60);
    setNumberOfDoors(numberOfDoors);
}

Car::Car() {
    setMake("Test");
    setModel("Test");
    setYear(2000);
    setAcceleration60(0.0);
    setNumberOfDoors(0);
}

string Car::printCarInfo(string type){
    string returnString = "\nCar Info\nCar Type: " + type +  "\nMake: " + make + "\nModel: " + model + "\nYear: " + to_string(year) + "\nAcceleration to 60: " + to_string(acceleration60) + "\nNumber of Doors: " + to_string(numberOfDoors) + "\n";
    return returnString;
}