#include <iostream>
#include <string>
#include "Complex.h"
using namespace std;
Complex::Complex(double rp,double ip)
:realPart(rp),imaginaryPart(ip)
{

}
void Complex::setComplex(double rp,double ip)
{
    realPart=rp;
    imaginaryPart=ip;
}
void Complex::getComplex(double rp,double ip)
{
    setComplex(rp,ip);
    (*this).print();
}
void Complex::add(Complex &right)
{
    (*this).realPart=(*this).realPart+right.realPart;
    (*this).imaginaryPart=(*this).imaginaryPart+right.imaginaryPart;
    (*this).print();

}
void Complex::subtract(Complex &right)
{
    (*this).realPart=(*this).realPart-right.realPart;
    (*this).imaginaryPart=(*this).imaginaryPart+right.imaginaryPart;
    (*this).print();
}
void Complex::print()
{
    cout<<realPart<<"+"<<imaginaryPart<<"*i"<<endl;
}
