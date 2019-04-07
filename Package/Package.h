#ifndef PACKAGE_H_INCLUDED
#define PACKAGE_H_INCLUDED
#include <iostream>
#include <string>
using namespace std;
class Package
{
public:
    Package(string ="sn" ,string ="r" ,string ="a" ,string ="c",string ="s",long =000000,double =0.0,double =0.0);
    void setSName(string);
    string getSName();
    void setRName(string);
    string getRName();
    void setAddress(string);
    string getAddress();
    void setCity(string);
    string getCity();
    void setState(string);
    string getState();
    void setPostnumber(long );
    long getPostnumber();
    void setWeight(double);
    double getWeight();
    void setPrice(double);
    double getPrice();
    double calculateCost(double,double);


private:
    string sname;
    string rname;
    string address;
    string city;
    string state;
    long postnumber;
    double weight;
    double price;

};



#endif // PACKAGE_H_INCLUDED
