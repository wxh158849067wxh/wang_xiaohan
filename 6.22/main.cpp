
using namespace std;

void square( int );

int main()
{
   int side;

   cout << "Enter side: ";
   cin >> side;
   cout << '\n';

   square( side );
   cout << endl;
}

void square( int side )
{

   for ( int row = 1; row <= side; row++ )
   {

      for ( int col = 1; col <= side; col++ )
         cout << '*';

      cout << '\n';
   }
}

