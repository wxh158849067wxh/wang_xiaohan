#include <iostream>
#include <string>
#include "Package.h"
using namespace std;
Package::Package(string sn,string r,string a,string c,string s,long po,double w,double p)
:sname(sn),rname(r),address(a),city(c),state(s),postnumber(po), weight(w>0?w:throw invalid_argument("weight must exceed 0") ), price(p>0?p:throw invalid_argument("price must exceed 0"))
{
  calculateCost(w,p);
}
void Package::setSName(string sn)
{
    sname=sn;
}
string Package::getSName()
{
    return sname;
}
void Package::setRName(string r)
{
    rname=r;
}
string Package::getRName()
{
    return rname;
}
void Package::setAddress(string a)
{
    address=a;
}
string Package::getAddress()
{
    return address;
}
void Package::setCity(string c)
{
    city=c;
}
string Package::getCity()
{
    return city;
}
void Package::setState(string s)
{
  state=s;
}
string Package::getState()
{
    return state;
}
void Package::setPostnumber(long po)
{
  postnumber=po;
}
long Package::getPostnumber()
{
    return postnumber;
}
void Package::setWeight(double w)
{
    weight=w;
}
double Package::getWeight()
{
    return weight;
}
void Package::setPrice(double p)
{
    price=p;
}
double Package::getPrice()
{
    return price;
}
double calculateCost(double weight,double price)
{
    return (weight*price);
}








