#ifndef COMPLEX_H_INCLUDED
#define COMPLEX_H_INCLUDED
#include <iostream>
class Complex
{
public:
    Complex(double,double);
    void setComplex(double,double);
    void getComplex(double,double);
    void add(Complex &);
    void subtract(Complex &);
    void print();
private:
    double realPart;
    double imaginaryPart;
};



#endif // COMPLEX_H_INCLUDED
