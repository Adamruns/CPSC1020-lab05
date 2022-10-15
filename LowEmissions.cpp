//Justin Sabia

#include "LowEmissions.h"

string lowEmissions::getMake() {
    return make;
}

string lowEmissions::getModel() {
    return model;
}

int lowEmissions::getYear() {
    return year;
}

double lowEmissions::getEmissionsByVolume() {
    return emissionsByVolume;
}

double lowEmissions::getMPG() {
    return mpg;
}

bool lowEmissions::setMake(string m) {
    if (m.length() < 100 || m.length() > 0) {
        make = m;
        return true;
    }
    else {
        return false;
    }
}

bool lowEmissions::setModel(string m) {
    if (m.length() < 100 || m.length() > 0) {
        model = m;
        return true;
    }
    else {
        return false;
    }
}

bool lowEmissions::setYear(int y) {
    if (y > 1800 && y < 2023) {
        year = y;
        return true;
    }
    else {
        return false;
    }
}

bool lowEmissions::setEmissionsByVolume(double ebv) {
    if (ebv > 0.0) {
        emissionsByVolume = ebv;
        return true;
    }
    else {
        return false;
    }
}

bool lowEmissions::setMPG(double mpg_info) {
    if (mpg > 0.0) {
        mpg = mpg_info;
        return true;
    }
    else {
        return false;
    }
}

lowEmissions::lowEmissions() {
    setMake("Test");
    setModel("Test");
    setYear(2000);
    setEmissionsByVolume(0.0);
    setMPG(0.0);
}
lowEmissions::lowEmissions(string make, string model, int year, double emissionsByVolume, double mpg) {
    setMake(make);
    setModel(model);
    setYear(year);
    setEmissionsByVolume(emissionsByVolume);
    setMPG(mpg);
}

string lowEmissions::printLowEmissionsInfo(string type){
    string returnString = "\nCar Info\nCar Type:" + type + "\nMake: " + make + "\nModel: " + model + "\nYear: " + to_string(year) + "\nEmissions: " + to_string(emissionsByVolume) + "\nMPG: " + to_string(mpg);
    return returnString;
}

