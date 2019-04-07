#ifndef TWODAYPACKAGE_H_INCLUDED
#define TWODAYPACKAGE_H_INCLUDED
#include <iostream>
#include <string>
#include "Package.h"
using namespace std;
class TwoDayPackage : public Package
{
    TwoDayPackage(const string &,const string &,const string &,const string &,const string &, long =000000,double =0.0,double =0.0,double =0.0);
    void setTwoPrice(double);
    double getTwoPrice();
    double calculateCost(double,double,double);
private:
    double twoprice;

};



#endif // TWODAYPACKAGE_H_INCLUDED
