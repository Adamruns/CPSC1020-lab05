// Adam Smith

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
using namespace std;
class Employee {
    private:
        string firstName;
        string lastName;
        string address;
        string email;
        string classesTaught;
        int employedAtClemsonSince;
    public:
        Employee();
        Employee(string, string, string, string, string, int);
        bool setFirstName(string n);
        string getFirstName();
        bool setLastName(string n);
        string getLastName();
        bool setAddress(string a);
        string getAddress();
        bool setEmail(string e);
        string getEmail();
        bool setClassesTaught(string ct);
        string getClassesTaught();
        bool setEmployedAtClemsonSince(int cs);
        int getEmployedAtClemsonSince();
        string printEmployeeInfo();
};

#endif