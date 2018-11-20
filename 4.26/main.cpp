
#include <iostream>
using namespace std;

int main()
{
   int number = 0;
   int digit1;
   int digit2;
   int digit4;
   int digit5;
   int digits = 0;

   while ( digits != 5 )
   {
      cout << "Enter a 5-digit number: ";
      cin >> number;


      if ( number < 100000 )
      {
         if ( number > 9999 )
            digits = 5;
         else
            cout << "Number must be 5 digits" << endl;
      }
      else
         cout << "Number must be 5 digits" << endl;
   }


   digit1 = number / 10000;
   digit2 = number % 10000 / 1000;
   digit4 = number % 10000 % 1000 % 100 / 10;
   digit5 = number % 10000 % 1000 % 100 % 10;


   if ( digit1 == digit5 )
   {
      if ( digit2 == digit4 )
         cout << number << " is a palindrome!!!" << endl;
      else
         cout << number << " is not a palindrome." << endl;
   }
   else
      cout << number << " is not a palindrome." << endl;
}


