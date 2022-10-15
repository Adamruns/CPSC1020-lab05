//Jay Thompson
//Visitor Class

#ifndef VISITOR_H
#define VISITOR_H

using namespace std;

class Visitor {
    private:
        string firstName;
        string lastName;
        string address;
        string email;
        bool collegeStd;
        bool parent;
    public:
        bool setFirstName(string n);
        string getFirstName();
        bool setLastName(string ln);
        string getLastName();
        bool setAddress(string a);
        string getAddress();
        bool setEmail(string e);
        string getEmail();
        bool setCollegeStudent(char cs);
        bool getCollegeStudent();
        bool setParent(char p);
        bool getParent();
        string printVisitorInfo();
        Visitor();
        Visitor(string,string,string,string,bool,bool);
};




#endif
