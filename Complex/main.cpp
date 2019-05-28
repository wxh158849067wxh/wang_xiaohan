#include <iostream>
#include <string>
#include "Complex.h"
using namespace std;
int main()
{
    Complex a(3.0,8.0);
    Complex b(2.0,3.0);
    a.add(b);
    a.getComplex(2.0,3.0);

}
