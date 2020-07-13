#include <iostream> 
using namespace std; 
int main() 
{   int num;
    cout<<"enter binary value: ";
	cin>>num;
	int decimal= 0; 
    int base=1; 
	int temp=num; 
	while (temp)
	{ 
		int last=temp%10; 
		temp=temp/10; 
		decimal=decimal+(last*base); 
		base=base*2; 
	} 
    cout<<decimal;
} 
