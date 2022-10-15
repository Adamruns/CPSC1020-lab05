// My Name: Anthony Moreno
// My Class: CPSC 1021
// Date: 10/29/2022 
// Desc: This program calculates parking pass charges
// Time: 5 hours

#ifndef MOPED_H
#define MOPED_H
#include <iostream>
#include <string>

using namespace std;

// Patient class
class Moped {
	private:
		// private variables
		string make;
		string model;
		int year;
        double weight;
        int seats;
	public:
		Moped();
		Moped(string, string, int, double, int);
		std::string getMake();
		bool setMake(string make);
		std::string getModel();
		bool setModel(string model);
		int getYear();
		bool setYear(int year);
		bool setWeight(double weight);
		double getWeight();
		bool setSeats(int s);
		int getSeats();
		string printMopedInfo(string);
};

#endif