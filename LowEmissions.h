//Justin Sabia
#ifndef LOWEMISSIONS_H_
#define LOWEMISSIONS_H_

#include <string>
using namespace std;

class lowEmissions {
    private:
        string make;
        string model;
        int year;
        double emissionsByVolume;
        double mpg;
    public:
        lowEmissions();
        lowEmissions(string, string, int, double, double);
        bool setMake(string);
        string getMake();
        bool setModel(string);
        string getModel();
        bool setYear(int);
        int getYear();
        bool setEmissionsByVolume(double);
        double getEmissionsByVolume();
        bool setMPG(double);
        double getMPG();
        string printLowEmissionsInfo(string);
};

#endif