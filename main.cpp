// This program calculates Parking Pass charges
// Names here
// CPSC 1020
// Lab 05
#include <iostream>
#include <iomanip>
#include <string>
#include "Car.h"
#include "Employee.h"
#include "Invoice.h"
#include "LowEmissions.h"
#include "Moped.h"
#include "Motorcycle.h"
#include "Student.h"
#include "Vendor.h"
#include "Visitor.h"

using namespace std;
#include <stdlib.h>
#include <iomanip>
int main () {
    string firstName;
    string lastName;
    string address;
    string email;
    string vehicleType;
    string make;
    string model;
    int year;
    int permitType;
    int customerType;
    Student student1;
    Employee employee1;
    Visitor visitor1;
    Vendor vendor1;
    Car car1;
    lowEmissions lowEmissions1;
    Motorcycle motorcycle1;
    Moped moped1;
    Invoice invoice1;

    cout << "Pick which one describes you best\n(1) Student\n(2) Employee\n(3) Visitor\n(4) Vendor\n";
    cin >> customerType;
    while (customerType != 1 && customerType != 2 && customerType != 3 && customerType != 4){
        cout << "Invalid Input please re-enter\n";
        cin >> customerType;
    }
    if(customerType == 1){
        string classStatus;
        customerType = 1;
        char charCommuter;
        cout << "You selected Student\n";
        
        cout << "Please enter First Name\n";
        cin >> firstName;
        while(!student1.setFirstName(firstName)){
            cout << "Invalid Input please try again\n";
            cin >> firstName;
        }

        cout << "Please enter Last Name\n";
        cin >> lastName;
        while(!student1.setLastName(lastName)){
            cout << "Invalid Input please try again\n";
            cin >> lastName;
        }

        cout << "Please enter Address\n";
        cin.ignore();
        getline(cin, address);
        while(!student1.setAddress(address)){
            cout << "Invalid Input please try again\n";
            cin.ignore();
            getline(cin, address);
        }
        
        cout << "Please enter email\n";
        cin >> email;
        while(!student1.setEmail(email)){
            cout << "Invalid Input please try again\n";
            cin >> email;
        }

        cout << "Pick which one describes you best\n (F) Freshman\n (SO) Sophmore\n (J) Junior\n (S) Senior\n";
        cin >> classStatus;
        while(!student1.setClassStatus(classStatus)){
            cout << "Invalid Input please try again\n";
            cin >> classStatus;
        }

        cout << "Are you a commuter?\nEnter Y for yes and N for No\n";
        cin >> charCommuter;
        if (toupper(charCommuter) == 'Y'){
            student1.setCommuter(true);
        }
        else if (toupper(charCommuter) == 'N'){
            student1.setCommuter(false);
        }
        else{
            cout << "Invalid Input";
            return 0;
        }

    }
    else if (customerType == 2){
        string classesTaught;
        customerType = 2;
        int employedAtClemsonSince;
        cout << "You selected Employee\n";

        cout << "Please enter First Name\n";
        cin >> firstName;
        while(!employee1.setFirstName(firstName)){
            cout << "Invalid Input please try again\n";
            cin >> firstName;
        }
        
        cout << "Please enter Last Name\n";
        cin >> lastName;
        while(!employee1.setLastName(lastName)){
            cout << "Invalid Input please try again\n";
            cin >> lastName;
        }

        cout << "Please enter Address\n";
        cin.ignore();
        getline(cin, address);
        while(!employee1.setAddress(address)){
            cout << "Invalid Input please try again\n";
            cin.ignore();
            getline(cin, address);
        }

        cout << "Please enter email\n";
        cin >> email;
        while(!employee1.setEmail(email)){
            cout << "Invalid Input please try again\n";
            cin >> email;
        }

        cout << "Whay year did you start working at clemson(1900-2022)?\n";
        cin >> employedAtClemsonSince;
        while(!employee1.setEmployedAtClemsonSince(employedAtClemsonSince)){
            cout << "Invalid Input please try again\n";
            cin >> employedAtClemsonSince;
        }
        
        cout << "What classes do you teach at Clemson?\n";
        cin.ignore();
        getline(cin, classesTaught);
        while(!employee1.setClassesTaught(classesTaught)){
            cout << "Invalid Input please try again\n";
            cin.ignore();
            getline(cin, classesTaught);
        }
    }
    else if (customerType == 3){
        bool collegeStd;
        bool parent = false;
        customerType = 3;
        cout << "You selected Visitor\n";
        
        cout << "Please enter First Name\n";
        cin >> firstName;
        while(!visitor1.setFirstName(firstName)){
            cout << "Invalid Input please try again\n";
            cin >> firstName;
        }

        cout << "Please enter Last Name\n";
        cin >> lastName;
        while(!visitor1.setLastName(lastName)){
            cout << "Invalid Input please try again\n";
            cin >> lastName;
        }
        
        cout << "Please enter Address\n";
        cin.ignore();
        getline(cin, address);
        while(!visitor1.setAddress(address)){
            cout << "Invalid Input please try again\n";
            cin.ignore();
            getline(cin, address);
        }
        
        cout << "Please enter email\n";
        cin >> email;
        while(!visitor1.setEmail(email)){
            cout << "Invalid Input please try again\n";
            cin >> email;
        }
        
        cout << "Are you a visiting college student?\n Y for yes N for no\n";
        cin >> collegeStd;
        if (toupper(collegeStd) == 'Y') {
            visitor1.setCollegeStudent(true);
        }
        else if (toupper(collegeStd) == 'N') {
            visitor1.setCollegeStudent(false);
        }
        if (collegeStd == false) {
            cout << "Are you a parent?\n Y for yes N for no\n";
            cin >> parent;
        }       
        if (toupper(parent) == 'Y') {
            visitor1.setParent(true);
        }
        else if (toupper(parent) == 'N') {
            visitor1.setParent(false);
        }
    }
    else if (customerType == 4){
        char gameday;
        char contract;
        customerType = 4;
        cout << "You selected Vendor\n";

        cout << "Please enter First Name\n";
        cin >> firstName;
        while(!vendor1.setFirstName(firstName)){
            cout << "Invalid Input please try again\n";
            cin >> firstName;
        }

        cout << "Please enter Last Name\n";
        cin >> lastName;
        while(!vendor1.setLastName(lastName)){
            cout << "Invalid Input please try again\n";
            cin >> lastName;
        }

        cout << "Please enter Address\n";
        cin.ignore();
        getline(cin, address);
        while(!vendor1.setAddress(address)){
            cout << "Invalid Input please try again\n";
            cin.ignore();
            getline(cin, address);
        }

        cout << "Please enter email\n";
        cin >> email;
        while(!vendor1.setEmail(email)){
            cout << "Invalid Input please try again\n";
            cin >> email;
        }
        
        cout << "Do you work gamedays? Y or N\n";
        cin >> gameday;
        while(!vendor1.setGameDay(gameday)){
            cout << "Invalid Input please try again\n";
            cin >> gameday;
        }

        cout << "Does your company have a contract with Clemson? Y or N\n";
        cin >> contract;
        while(!vendor1.setContract(contract)){
            cout << "Invalid Input please try again\n";
            cin >> contract;
        }
    }
    else {
        cout << "Entered invalid input please retry\n";
    }
    cout << "What type of vehicle will you be driving (car, low-emissions, motorcycle, or moped)?\n";
        cin >> vehicleType;
        while (vehicleType != "car" && vehicleType != "low-emissions" && vehicleType != "motorcycle" && vehicleType != "moped"){
            cout << "Invalid input please re enter\n";
            cin >> vehicleType;
        }
        if (vehicleType == "car") {
            double acceleration60;
            int numberOfDoors;
            cout << "You have selected car" << endl;
            
            cout << "Enter your make\n";
            cin >> make;
            while(!car1.setMake(make)){
                cout << "Invalid Input please try again\n";
                cin >> make;
            }

            cout << "Enter your model\n";
            cin >> model;
            while(!car1.setModel(model)){
                cout << "Invalid Input please try again\n";
                cin >> model;
            }

            cout << "Enter your year\n";
            cin >> year;
            while(cin.fail()){
                cin.clear();
                cin.ignore(INT_MAX, '\n'); // ignore last input
                cout << "You can only enter numbers.\n";
                cout << "Enter a number.\n";
                cin >> year;
            }
            while(!car1.setYear(year)){
                cout << "Invalid Input please try again\n";
                cin >> year;
            }

            cout << "How fast does your car accelerate to 60 (in seconds)?\n";
            cin >> acceleration60;
            while(!car1.setAcceleration60(acceleration60)){
                cout << "Invalid Input please try again\n";
                cin >> acceleration60;
            }

            cout << "How many doors does the car have?\n";
            cin >> numberOfDoors;
            while(!car1.setNumberOfDoors(numberOfDoors)){
                cout << "Invalid Input please try again\n";
                cin >> numberOfDoors;
            }

            
        }
        if (vehicleType == "low-emissions") {
            double emissionsByVolume = 0.0;
            double mpg = 0.0;
            
            cout << "You have selected low-emissions\n" << endl;

            cout << "Enter your make\n";
            cin >> make;
            while(!lowEmissions1.setMake(make)){
                cout << "Invalid Input please try again\n";
                cin >> make;
            }

            cout << "Enter your model\n";
            cin >> model;
            while(!lowEmissions1.setModel(model)){
                cout << "Invalid Input please try again\n";
                cin >> model;
            }
            
            cout << "Enter your year\n";
            cin >> year;
            while(!lowEmissions1.setYear(year)){
                cout << "Invalid Input please try again\n";
                cin >> year;
            }
            
            cout << "enter emissions by volume: \n";
            cin >> emissionsByVolume;
            while(!lowEmissions1.setEmissionsByVolume(emissionsByVolume)){
                cout << "Invalid Input please try again\n";
                cin >> emissionsByVolume;
            }
            
            cout << "How many doors does the car have?\n";
            cin >> mpg;
            while(!lowEmissions1.setMPG(mpg)){
                cout << "Invalid Input please try again\n";
                cin >> mpg;
            }
        }
        if (vehicleType == "motorcycle") {
            int numTires;
            double engineSize;
            
            cout << "You have selected motorcycle" << endl;
            cout << "Enter your make:" << endl;
            cin >> make;
            while(!motorcycle1.setMake(make)){
                cout << "Invalid Input please try again\n";
                cin >> make;
            }
            cout << "Enter your model:" << endl;
            cin >> model;
            while(!motorcycle1.setModel(model)){
                cout << "Invalid Input please try again\n";
                cin >> model;
            }

            cout << "Enter your year:" << endl;
            cin >> year;
            while(!motorcycle1.setYear(year)){
                cout << "Invalid Input please try again\n";
                cin >> year;
            }           
            cout << "How many tires does your motorcylce have?\n";
            cin >> numTires;
            while(!motorcycle1.setNumTires(numTires)){
                cout << "Invalid Input please try again\n";
                cin >> numTires;
            }
            
            cout << "What is your engine size(in cc)?\n";
            cin >> engineSize;
            while(!motorcycle1.setEngineSize(engineSize)){
                cout << "Invalid Input please try again\n";
                cin >> engineSize;
            }
        }
        if (vehicleType == "moped") {
            double weight;
            int seats;

            cout << "You have selected moped" << endl;
            cout << "Enter your make:" << endl;
            cin >> make;
            while(!moped1.setMake(make)){
                cout << "Invalid Input please try again\n";
                cin >> make;
            }

            cout << "Enter your model:" << endl;
            cin >> model;
            while(!moped1.setModel(model)){
                cout << "Invalid Input please try again\n";
                cin >> model;
            }
            
            cout << "Enter your year:" << endl;
            cin >> year;
            while(!moped1.setYear(year)){
                cout << "Invalid Input please try again\n";
                cin >> year;
            }

            cout << "How much does your moped weigh?\n";
            cin >> weight;
            while(!moped1.setWeight(weight)){
                cout << "Invalid Input please try again\n";
                cin >> weight;
            }

            cout << "How many seats does your moped have?\n";
            cin >> seats;
            while(!moped1.setSeats(seats)){
                cout << "Invalid Input please try again\n";
                cin >> seats;
            }
        }
    
        cout << "What type of permit would you like to buy\n";
        cout << "(1) Annual\n(2) Semester\n(3) Daily\n";
        cin >> permitType;
        
        if (permitType == 1) {
            invoice1.setPermitCost(180.00);
            invoice1.setServiceCharge(5.00);
            if (customerType == 3) {
                invoice1.setDiscount(10.00);
            }
            if(vehicleType == "low-emissions") {
                invoice1.setDiscount(10.00);
            }
        }
        if (permitType == 2) {
            invoice1.setPermitCost(90.00);
            invoice1.setServiceCharge(5.00);
            if (customerType == 3) {
                invoice1.setDiscount(10.00);
            }
            if(vehicleType == "low-emissions") {
                invoice1.setDiscount(10.00);
            }
        }
        if (permitType == 3) {
            invoice1.setPermitCost(3.00);
            invoice1.setServiceCharge(1.00);
            if (customerType == 3) {
                invoice1.setDiscount(1.00);
            }
            if(vehicleType == "low-emissions") {
                invoice1.setDiscount(1.00);
            }
        }
        //Student Type
        if (customerType == 1 && vehicleType == "car"){
            cout << invoice1.printInvoice(student1.printStudentInfo(), car1.printCarInfo(vehicleType),invoice1.printPermitInfo());
        }
        else if (customerType == 1 && vehicleType == "low-emissions") {
            cout << invoice1.printInvoice(student1.printStudentInfo(), lowEmissions1.printLowEmissionsInfo(vehicleType),invoice1.printPermitInfo());
        }
        else if (customerType == 1 && vehicleType == "motorcycle"){
            cout << invoice1.printInvoice(student1.printStudentInfo(), motorcycle1.printMotorcycleInfo(vehicleType),invoice1.printPermitInfo());

        }
        else if (customerType == 1 && vehicleType == "moped") {
            cout << invoice1.printInvoice(student1.printStudentInfo(), moped1.printMopedInfo(vehicleType),invoice1.printPermitInfo());

        }
        //Employee Type
        else if (customerType == 2 && vehicleType == "low-emissions"){
            cout << invoice1.printInvoice(employee1.printEmployeeInfo(), lowEmissions1.printLowEmissionsInfo(vehicleType),invoice1.printPermitInfo());
        }
        else if (customerType == 2 && vehicleType == "car"){
            cout << invoice1.printInvoice(employee1.printEmployeeInfo(), car1.printCarInfo(vehicleType), invoice1.printPermitInfo());
        }
        else if (customerType == 2 && vehicleType == "moped"){
            cout << invoice1.printInvoice(employee1.printEmployeeInfo(), moped1.printMopedInfo(vehicleType), invoice1.printPermitInfo());
        }
        else if (customerType == 2 && vehicleType == "motorcycle"){
            cout << invoice1.printInvoice(employee1.printEmployeeInfo(), motorcycle1.printMotorcycleInfo(vehicleType), invoice1.printPermitInfo());
        }
        //Visitor Type
        else if (customerType == 3 && vehicleType == "low-emissions") {
            cout << invoice1.printInvoice(visitor1.printVisitorInfo(), lowEmissions1.printLowEmissionsInfo(vehicleType),invoice1.printPermitInfo());
        }
        else if (customerType == 3 && vehicleType == "car") {
            cout << invoice1.printInvoice(visitor1.printVisitorInfo(), car1.printCarInfo(vehicleType), invoice1.printPermitInfo());
        }
        else if (customerType == 3 && vehicleType == "motorcycle") {
            cout << invoice1.printInvoice(visitor1.printVisitorInfo(), motorcycle1.printMotorcycleInfo(vehicleType), invoice1.printPermitInfo());
        }
        else if (customerType == 3 && vehicleType == "moped") {
            cout << invoice1.printInvoice(visitor1.printVisitorInfo(), moped1.printMopedInfo(vehicleType),invoice1.printPermitInfo());
        }
        //Vendor Type
        else if (customerType == 4 && vehicleType == "low-emissions") {
            cout << invoice1.printInvoice(vendor1.printVendorInfo(), lowEmissions1.printLowEmissionsInfo(vehicleType),invoice1.printPermitInfo());
        }
        else if (customerType == 4 && vehicleType == "car") {
            cout << invoice1.printInvoice(vendor1.printVendorInfo(), car1.printCarInfo(vehicleType),invoice1.printPermitInfo());
        }
        else if (customerType == 4 && vehicleType == "motorcycle") {
            cout << invoice1.printInvoice(vendor1.printVendorInfo(), motorcycle1.printMotorcycleInfo(vehicleType),invoice1.printPermitInfo());           
        }
        else if (customerType == 4 && vehicleType == "moped") {
            cout << invoice1.printInvoice(vendor1.printVendorInfo(), moped1.printMopedInfo(vehicleType),invoice1.printPermitInfo());
        }
    return 0;
}