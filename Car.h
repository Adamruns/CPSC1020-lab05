// Adam Smith
#ifndef CAR_H
#define CAR_H
#include <string>
using namespace std;
class Car {
    private:
        string make;
        string model;
        int year;
        double acceleration60;
        int numberOfDoors;
    public:
        string getMake();
        bool setMake(string mk);
        string getModel();
        bool setModel(string md);
        bool setYear(int y);
        int getYear();
        double getAcceleration60();
        bool setAcceleration60(double a60);
        int getNumberOfDoors();
        bool setNumberOfDoors(int d);
        string printCarInfo(string);
        Car();
        Car(string, string, int, double, double);
};

#endif