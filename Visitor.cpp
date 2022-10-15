//Jay Thompson
//Visitor Class
#include <iostream>
#include <string>
#include "Visitor.h"

using namespace std;

string Visitor::getFirstName() {
    return firstName;
}

string Visitor::getLastName() {
    return lastName;
}

string Visitor::getAddress() {
    return address;
}

string Visitor::getEmail() {
    return email;
}

bool Visitor::getCollegeStudent() {
    return collegeStd;
}

bool Visitor::getParent() {
    return parent;
}

bool Visitor::setFirstName(string n) {
    if (n.size() > 100 || n.size() < 0) {
        return false;
    }
    firstName = n;
    return true;
}

bool Visitor::setLastName(string ln) {
    if (ln.size() > 100 || ln.size() < 0) {
        return false;
    } 
    lastName = ln;
    return true;
}

bool Visitor::setAddress(string a) {
    if (a.size() > 100 || a.size() <0){
        return false;
    }
    address = a;
    return true;
}

bool Visitor::setEmail(string e) {
    if (e.size() > 100 || e.size() <0){
        return false;
    }
    email = e;
    return true;
}

bool Visitor::setCollegeStudent(char cs) {
    if (toupper(cs) == 'Y') { 
        collegeStd = true;
        return true;
    }
    else if (toupper(cs) == 'N') {
        collegeStd = false;
        return true;
    }
    return false;
}

bool Visitor::setParent(char p) {
    if (toupper(p) == 'Y') {
        p = true;
        return true;
    }
    else if (toupper(p) == 'N') {
        p = false;
        return true;
    }
    return false;
}

Visitor::Visitor(string firstName, string lastName, string address, string email, bool collegeStd, bool parent) {
    setFirstName(firstName);
	setLastName(lastName);
	setAddress(address);
	setEmail(email);
    setCollegeStudent(collegeStd);
    setParent(parent);
}

Visitor::Visitor() {
    setFirstName("Test");
	setLastName("Test");
	setAddress("Test 123 street");
	setEmail("123@gmail.com");
    setCollegeStudent(true);
    setParent(true);
}


string Visitor::printVisitorInfo() {
    string returnString = "Employee Info\nFirst Name: " + firstName + "\nLastName: " + lastName + "\nAddress: " + address + "\nEmail: " + email + "\nCollege Student: " + "True" + "\nParent: " + "True";
    return returnString;
}