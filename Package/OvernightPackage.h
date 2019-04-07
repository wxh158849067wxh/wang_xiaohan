#ifndef OVERNIGHTPACKAGE_H_INCLUDED
#define OVERNIGHTPACKAGE_H_INCLUDED
#include <iostream>
#include <string>
#include "Package.h"
using namespace std;
class OvernightPackage : public Package
{
    OvernightPackage(const string &,const string &,const string &,const string &,const string &, long =000000,double =0.0,double =0.0,double =0.0);
    void setExtremePrice(double);
    double getExtremePrice();
    double calculateCost(double,double,double);
private:
    double extremeprice;
};



#endif // OVERNIGHTPACKAGE_H_INCLUDED
