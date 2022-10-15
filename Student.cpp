// Justin Sabia

#include "Student.h"
using namespace std;
string Student::getFirstName() {
    return firstName;
}

string Student::getLastName() {
    return lastName;
}

string Student::getAddress() {
    return address;
}

string Student::getEmail() {
    return email;
}

string Student::getClassStatus() {
    return classStatus;
}

bool Student::getCommuter() {
    return commuter;
}

bool Student::setFirstName(string n) {
    if (n.size() > 100 || n.size() < 0) {
        return false;
    }
    firstName = n;
    return true;
}

bool Student::setLastName(string n) {
    if (n.size() > 100 || n.size() < 0) {
        return false;
    } 
    lastName = n;
    return true;
}

bool Student::setAddress(string a) {
    if (a.size() > 100 || a.size() <0){
        return false;
    }
    address = a;
    return true;
}

bool Student::setEmail(string e) {
    if (e.size() > 100 || e.size() <0){
        return false;
    }
    email = e;
    return true;
}

bool Student::setClassStatus(string s) {
    if (s == "F" || s == "F" || s == "J" || s == "SO") {
        classStatus = s;
        return true;
    }
    else {
        return false;
    }
}

bool Student::setCommuter(bool c) {
    if (c == true || c == false) {
        return true;
    }
    else {
        return false;
    }
}
Student::Student(){
    setFirstName("Default");
    setLastName("Test");
    setEmail("test@gmail.com");
    setClassStatus("S");
    setCommuter(true);
}
Student::Student(string firstName, string lastName, string address, string email, string classStatus, bool commuter){
    setFirstName(firstName);
    setLastName(lastName);
    setAddress(address);
    setEmail(email);
    setClassStatus(classStatus);
    setCommuter(commuter);
}

string Student::printStudentInfo(){
    string commuterString;
    if (commuter == true){
        commuterString = "True";
    }
    else {
        commuterString = "False";
    }
    string returnString = "Student Info\nFirst Name: " + firstName + "\nLast Name: " + lastName + "\nAddress: " + address + "\nEmail: " + email + "\nClass Status: " + classStatus + "\nCommuter: " + commuterString + "\n";
    return returnString;
}