// My Name: Anthony Moreno
// My Class: CPSC 1021
// Date: 10/29/2022 
// Desc: This program calculates parking pass charges
// Time: 5 hours

#include "Vendor.h" // include vendor header file
using namespace std;
bool Vendor::setFirstName(string n){
    if (n.size() > 100 || n.size() <0){
        return false;
    }
    firstName = n;
    return true;
}
string Vendor::getFirstName(){
    return firstName;
}
bool Vendor::setLastName(string n){
    if (n.size() > 100 || n.size() <0){
        return false;
    }
    lastName = n;
    return true;
}
string Vendor::getLastName(){
    return lastName;
}
bool Vendor::setAddress(string a){
    if (a.size() > 100 || a.size() <0){
        return false;
    }
    address = a;
    return true;
}
string Vendor::getAddress(){
    return address;
}
bool Vendor::setEmail(string e){
    if (e.size() > 100 || e.size() <0){
        return false;
    }
    email = e;
    return true;
}
string Vendor::getEmail(){
    return email;
}

// getter and setter functions for gameday
bool Vendor::getGameDay() {
	return gameDay;
}
bool Vendor::setGameDay(char g) {
	if (toupper(g) == 'Y'){
        gameDay = true;
		return true;
	}
    else if (toupper(g) == 'N'){
        gameDay = false;
        return true;
    }
	return false;
}

// getter and setter functions for contract
bool Vendor::getContract() {
	return contract;
}

bool Vendor::setContract(char c) {
	if (toupper(c) == 'Y') {
        contract = true;
        return true;
    }
    else if (toupper(c) == 'N') {
        contract = false;
        return true;
    }
    return false;
}


Vendor::Vendor(string firstName, string lastName, string address, string email, bool gameday, bool contract) {
    setFirstName(firstName);
	setLastName(lastName);
	setAddress(address);
	setEmail(email);
    setGameDay(gameday);
    setContract(contract);
}
Vendor::Vendor(){
    setFirstName("Test");
	setLastName("Test");
	setAddress("Test 123 street");
	setEmail("123@gmail.com");
    setGameDay(true);
    setContract(true);
}

string Vendor::printVendorInfo(){
    string returnString = "Vendor Info\nFirst Name: " + firstName + "\nLastName: " + lastName + "\nAddress: " + address + "\nEmail: " + email + "\nGameday: " + "True" + "\nContract: " + "True";
    return returnString;
}

    
