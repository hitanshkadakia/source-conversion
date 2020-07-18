#include <iostream>
#include <cmath>
using namespace std;
int main()
{
   int a;
   cout << "Enter octal number: ";
   cin >>a;
   int decimal=0,i=0,rem;
    while (a!= 0)
    {
        rem=a%10;
        a=a/10;
        decimal=decimal+(rem*pow(8,i));
        i++;
    }
   cout<<decimal;
  }
