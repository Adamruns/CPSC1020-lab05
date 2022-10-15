// Adam Smith
#include "Employee.h"
bool Employee::setFirstName(string n) {
    if (n.size() > 100 || n.size() < 0) {
        return false;
    }
    firstName = n;
    return true;
}
string Employee::getFirstName(){
    return firstName;
}
bool Employee::setLastName(string n){
    if (n.size() > 100 || n.size() <0){
        return false;
    }
    lastName = n;
    return true;
}
string Employee::getLastName(){
    return lastName;
}
bool Employee::setAddress(string a){
    if (a.size() > 100 || a.size() <0){
        return false;
    }
    address = a;
    return true;
}
string Employee::getAddress(){
    return address;
}
bool Employee::setEmail(string e){
    if (e.size() > 100 || e.size() <0){
        return false;
    }
    email = e;
    return true;
}
string Employee::getEmail(){
    return email;
}
bool Employee::setClassesTaught(string ct){
    if (ct.size() > 100 || ct.size() <0){
        return false;
    }
    classesTaught = ct;
    return true;
}
string Employee::getClassesTaught(){
    return classesTaught;
}
bool Employee::setEmployedAtClemsonSince(int cs){
    if (cs > 2022 || cs < 1900){
        return false;
    }
    employedAtClemsonSince = cs;
    return true;
}
int Employee::getEmployedAtClemsonSince(){
    return employedAtClemsonSince;
}

Employee::Employee(string firstName, string lastName, string address, string email, string classesTaught, int employedAtClemsonSince) {
    setFirstName(firstName);
	setLastName(lastName);
	setAddress(address);
	setEmail(email);
    setClassesTaught(classesTaught);
    setEmployedAtClemsonSince(employedAtClemsonSince);
}

Employee::Employee() {
    setFirstName("Test");
	setLastName("Test");
	setAddress("Test 123 street");
	setEmail("123@gmail.com");
    setClassesTaught("Test");
    setEmployedAtClemsonSince(1900);
}


string Employee::printEmployeeInfo() {
    string returnString = "Employee Info\nFirst Name: " + firstName + "\nLastName: " + lastName + "\nAddress: " + address + "\nEmail: " + email + "\nClasses Taught: " + classesTaught + "\nEmployed since: " + to_string(employedAtClemsonSince);
    return returnString;
}
