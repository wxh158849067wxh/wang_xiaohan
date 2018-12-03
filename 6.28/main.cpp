
#include <iostream>
using namespace std;

bool isPerfect( int );
void printSum( int );

int main()
{
   cout << "Perfect integers between 1 and 1000:" << endl;


   for ( int j = 2; j <= 1000; j++ )
   {

      if ( isPerfect( j ) )
         printSum( j );
   }

   cout << endl;
}



bool isPerfect( int value )
{
   int factorSum = 1;


   for ( int i = 2; i <= value / 2; i++ )
   {

      if ( value % i == 0 )
         factorSum += i;
   }


   return factorSum == value;
}


void printSum( int value )
{
   cout << value << " = 1";


   for ( int i = 2; i <= value / 2; i++ )
   {

      if ( value % i == 0 )
         cout << " + " << i;
   } r

   cout << endl;
}

