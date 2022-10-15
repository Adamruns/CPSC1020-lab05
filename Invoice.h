#ifndef INVOICE_H_
#define INVOICE_H_
#include <string>
#include <cmath>
#include <iomanip>
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
class Invoice {
    private:
        double permitCost;
        double discount;
        double serviceCharge;
        string customerInfo;
        string vehicleInfo;
    public:
        Invoice();
        Invoice(double, double, double);
        double calcTotalPrice();
        double getPermitCost();
        bool setPermitCost(double pc);
        double getDiscount();
        bool setDiscount(double d);
        double getServiceCharge();
        bool setServiceCharge(double sc);
        string getCustomerInfo();
        bool setCustomerInfo(string ci);
        string getVehicleInfo();
        bool setVehicleInfo(string ci);
        string printPermitInfo();
        string printInvoice(string,string,string); 
};

#endif