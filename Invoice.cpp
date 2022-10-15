#include "Invoice.h"

double Invoice::getPermitCost() {
    return permitCost;
}

double Invoice::getDiscount() {
    return discount;
}

double Invoice::getServiceCharge() {
    return serviceCharge;
}
 
bool Invoice::setPermitCost(double pc) {
    if (pc > 0) {
        permitCost = pc;
        return true;
    }   
    else {
        return false;
    }
}

bool Invoice::setDiscount(double d) {
    if (d > 0) {
        discount = d;
        return true;
    }
    else {
        return false;
    }
}

bool Invoice::setServiceCharge(double sc) {
    if (sc > 0) {
        serviceCharge = sc;
        return true;
    }
    else {
        return false;
    }
}
string Invoice::printPermitInfo(){
    string discountString;
    if (!(discount > 0)){
        discountString = "\nDiscount: -" + to_string(discount);
    }
    else {
        discountString = "";
    }
    string permitInfo = "\nPricing\nPermit Fee: " + to_string(permitCost) + "\nService Charge: " + to_string(serviceCharge) + discountString + "\n" + "Total cost: " + to_string(calcTotalPrice()) + "\n";
    return permitInfo;
}
string Invoice::printInvoice(string customerInfo, string vehicleInfo, string permitInfo) {
    string invoiceString = customerInfo + vehicleInfo + permitInfo;
    return invoiceString;
}

string Invoice::getCustomerInfo(){
    return customerInfo;
}
string Invoice::getVehicleInfo(){
    return vehicleInfo;
}
bool Invoice::setCustomerInfo(string ci){
    if (ci.length() >0){
        customerInfo = ci;
        return true;
    }
    return false;
}
bool Invoice::setVehicleInfo(string vi){
    if (vi.length() >0){
        vehicleInfo = vi;
        return true;
    }
    return false;
}
Invoice::Invoice(){
    setPermitCost(0);
    setDiscount(0);
    setServiceCharge(0);
}
Invoice::Invoice(double pc,double d,double sc){
    setPermitCost(pc);
    setDiscount(d);
    setServiceCharge(sc);
}
double Invoice::calcTotalPrice(){
    double totalCost = (permitCost + serviceCharge - discount);
    return (ceil(totalCost*100.0) / 100.0);
}