// My Name: Anthony Moreno
// My Class: CPSC 1021
// Date: 10/29/2022 
// Desc: This program calculates parking pass charges
// Time: 5 hours

#include "Moped.h"

string Moped::getMake() {
    return make;
}

bool Moped::setMake(string mk) {
    if (make.length() < 100 || make.length() > 0) {
        make = mk;
        return true;
    }
    else {
        return false;
    }
}

string Moped::getModel() {
    return model;
}

bool Moped::setModel(string md){
    if (model.length() < 100 || model.length() > 0) {
        model = md;
        return true;
    }
    else {
        return false;
    }
}

int Moped::getYear() {
    return year;
}

bool Moped::setYear(int y) {
    if (y > 1800 && y < 2024) {
        year = y;
        return true;
    }
    else {
        return false;
    }
}

double Moped::getWeight() {
    return weight;
}

bool Moped::setWeight(double w) {
    if (w > 0.0) {
        weight = w;
        return true;
    }
    else {
        return false;
    }
}

int Moped::getSeats() {
    return seats;
}

bool Moped::setSeats(int s) {
    if (s > 0) {
        seats = s;
        return true;
    }
    else {
        return false;
    }
}

Moped::Moped(string make, string model, int year, double weight, int seats) {
    setMake(make);
    setModel(model);
    setYear(year);
    setWeight(weight);
    setSeats(seats);
}

Moped::Moped() {
    setMake("Test");
    setModel("Test");
    setYear(2000);
    setWeight(0.0);
    setSeats(0);
}

string Moped::printMopedInfo(string type){
    string returnString = "\nCar Info\nCar Type:" + type + "\nMake: " + make + "\nModel: " + model + "\nYear: " + to_string(year) + "\nMoped Weight: " + to_string(weight) + "\nNumber of Seats: " + to_string(seats);
    return returnString;
}