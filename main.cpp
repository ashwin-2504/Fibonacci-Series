#include <iostream>
using namespace std;

int main () 
{
  int a, b, c, d, e;
  
  a = 0;
  b = 1;

  cout << "Enter the number of terms: ";
  cin >> d;
  cout << "0\n" << "1" << endl;
  e = d - 3;

  
  for(d = 0 ;d <= e; d++)
  {   
    c = a + b;
    cout << c << endl;    
    a= b;
    b = c;
  }

  return 0;  
}