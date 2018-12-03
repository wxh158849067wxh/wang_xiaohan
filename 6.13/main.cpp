
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double roundToIntegers( double );

int main()
{
   double x;
   double y;

   cout << fixed;


   for ( int loop = 1; loop <= 5; loop++ )
   {
      cout << "Enter a number: ";
      cin >> x;

      y = roundToIntegers( x );
      cout << setprecision( 6 ) << x << " rounded is "
         << setprecision( 1 ) << y << endl;
   }
}


double roundToIntegers( double value )
{
	return floor( value + .5 );
}

