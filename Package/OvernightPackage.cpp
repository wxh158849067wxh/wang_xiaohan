#include <iostream>
#include <string>
#include "OvernightPackage.h"
using namespace std;
OvernightPackage::OvernightPackage(const string &sn,const string &r,const string &a,const string &c,const string &s,long ps,double w,double p,double ep)
:Package(sn,r,a,c,s,ps,w,p)
{
    setExtremePrice(ep);

}
void OvernightPackage::setExtremePrice(double ep)
{
    if(ep>0.0)
    {
        extremeprice=ep;
    }
    else
    throw invalid_argument("extremeprice must exceed 0.0");


}
double OvernightPackage::getExtremePrice()
{
    return extremeprice;
}
double OvernightPackage::calculateCost()
{
    return (getWeight()*(getPrice()+extremeprice));
}
