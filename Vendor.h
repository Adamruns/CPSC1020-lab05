// My Name: Anthony Moreno
// My Class: CPSC 1021
// Date: 10/29/2022 
// Desc: This program calculates parking pass charges
// Time: 5 hours

#ifndef VENDOR_H
#define VENDOR_H
#include <iostream>
#include <string>
using namespace std;

//Vendor class
class Vendor {
	private:
		string firstName;
        string lastName;
		string address;
		string email;
        bool gameDay;
        bool contract;
    
    public:
        Vendor();
        Vendor(string firstName, string lastName, string address, string email, bool gameDay, bool contract);
        bool setFirstName(string);
        string getFirstName();
        bool setLastName(string);
        string getLastName();
        bool setAddress(string);
        string getAddress();
        bool setEmail(string);
        string getEmail();
        bool setGameDay(char);
        bool getGameDay();
        bool setContract(char);
        bool getContract();
        string printVendorInfo();
};

#endif