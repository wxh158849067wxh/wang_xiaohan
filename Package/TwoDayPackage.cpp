#include <iostream>
#include <string>
#include "TwoDayPackage.h"
using namespace std;
TwoDayPackage::TwoDayPackage(const string &sn,const string &r,const string &a,const string &c,const string &s,long ps,double w,double p,double tp)
:Package(sn,r,a,c,s,ps,w,p)
{
   setTwoPrice(tp);
   calculateCost(w,p,tp);
}
void TwoDayPackage::setTwoPrice(double tp)
{
    if(tp>0.0)
    {
        twoprice=tp;
    }
    else
    throw invalid_argument("twoprice must exceed 0.0");


}
double TwoDayPackage::getTwoPrice()
{
    return twoprice;
}
double TwoDayPackage::calculateCost(double w,double p,double tp)
{
    return (tp+w*p);
}
