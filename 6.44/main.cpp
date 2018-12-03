
#include <iostream>
using namespace std;c

int main()
{
   char c;

   if ( ( c = cin.get() ) != EOF )
   {
      main();
      cout << c << " ";
   }
}

