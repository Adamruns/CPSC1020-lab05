//Justin Sabia
#ifndef STUDENT_H_
#define STUDENT_H_
#include <string>
using namespace std;
class Student {
    private:
        string firstName;
        string lastName;
        string address;
        string email;
        string classStatus;
        bool commuter;
    public:
        Student();
        Student(string, string, string, string, string, bool);
        bool setFirstName(string);
        string getFirstName();
        bool setLastName(string);
        string getLastName();
        bool setAddress(string);
        string getAddress();
        bool setEmail(string);
        string getEmail();
        bool setClassStatus(string);
        string getClassStatus();
        bool setCommuter(bool);
        bool getCommuter();
        string printStudentInfo();
};

#endif