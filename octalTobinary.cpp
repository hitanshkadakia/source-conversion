#include <iostream>
#include <cmath>
using namespace std;
int main()
{    int octal;
    cout<<"Enter an octal number: ";
    cin>>octal;
    int decimal=0,i=0,j=1;
    long long binary=0;
    while(octal!=0)
    {
        decimal=decimal+(octal%10)*pow(8,i);
        i++;
        octal=octal/10;
    }
        while (decimal!=0)
    {
        binary=binary+(decimal%2)*j;
        decimal=decimal/2;
        j=j*10;
    }
    cout<<binary;
}