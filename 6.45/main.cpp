
#include <iostream>
using namespace std;

int mystery( int, int );

int main()
{
   int x, y;

   cout << "Enter two integers: ";
   cin >> x >> y;
   cout << "The result is " << mystery( x, y ) << endl;
}


int mystery( int a, int b )
{
   if ( b == 1 )
      return a;
   else
      return a + mystery( a, b - 1 );
}

