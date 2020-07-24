#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    long long binary;
    cout << "Enter a binary number: ";
    cin >> binary;
    int octal=0,decimal=0,i=0,j=1;
    while(binary!=0)
    {
        decimal=decimal+(binary%10)*pow(2,i);
        i++;
        binary=binary/10;
    }
    while (decimal!=0)
    {
        octal=octal+(decimal%8)*j;
        decimal=decimal/8;
        j=j*10;
    }
    cout<<octal;
}
