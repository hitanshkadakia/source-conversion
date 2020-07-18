#include <iostream> 
using namespace std; 
int main() 
{ 
    int n;
    cout<<"enter number: ";
    cin>>n;
	int octal[100]; 
	int i=0; 
	while(n!=0)
	{ 
		octal[i]=n%8; 
		n=n/8; 
		i++; 
	} 
	for (int b=i-1;b>=0;b--)
	{
		cout << octal[b]; 
	}
}
