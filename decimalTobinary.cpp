#include<iostream> 
using namespace std; 
int main() 
{ 
    int n;
    cout<<"enter number: ";
    cin>>n;
	int a[100]; 
	int i=0; 
	while(n>0)
	{
		a[i]=n%2; 
		n=n/2; 
		i++; 
	} 
	for (int b=i-1;b>=0;b--)
	{
		cout<<a[b];
	}
} 
