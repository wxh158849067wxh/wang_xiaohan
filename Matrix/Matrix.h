#ifndef MATRIX_H_INCLUDED
#define MATRIX_H_INCLUDED
#include <iostream>
#include <string>
#include <cmath>
using namespace std;



class Matrix
{
    friend ostream &operator<<(ostream &,const Matrix &);
    friend istream &operator>>(istream &,Matrix &);
private:
    string ss11;
    string ss12;
    string ss13;
    string ss21;
    string ss22;
    string ss23;
    string ss31;
    string ss32;
    string ss33;
};



#endif // MATRIX_H_INCLUDED
