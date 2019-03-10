#include <iostream>
#include <iomanip>
#include "Matrix.h"
#include <string>
using namespace std;


ostream &operator<<(ostream &output, const Matrix &line)
{
    output<<line.ss11<<" "<<line.ss12<<" "<<line.ss13<<"\n"<<line.ss21<<" "<<line.ss22<<" "<<line.ss23<<"\n"<<line.ss31<<" "<<line.ss32<<" "<<line.ss33;

    return output;
}
istream &operator>>(istream &input,Matrix &line)
{
    input>>setw(1)>>line.ss11;
    input.ignore();
    input>>setw(1)>>line.ss12;
    input.ignore();
    input>>setw(1)>>line.ss13;
    input.ignore(110,'\n');
    input>>setw(1)>>line.ss21;
    input.ignore();
    input>>setw(1)>>line.ss22;
    input.ignore();
    input>>setw(1)>>line.ss23;
    input.ignore(110,'\n');
    input>>setw(1)>>line.ss31;
    input.ignore();
    input>>setw(1)>>line.ss32;
    input.ignore();
    input>>setw(1)>>line.ss33;
    return input;



}
