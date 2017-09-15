#include <iostream>
using namespace std;

int main() {
	// program to print all Armstrong numbers between 1 to n
	int n,d,s=0,n1;
	cout<<"Enter N=";
	cin>>n;
	n=n1;
	while(n1)
	{
	d=n%10;
	s=s+d*d*d;
	n1=n1/10;
	}
	if(n==s)
	cout<<"Number is Armstrong\n";
		else
		cout<<"Number is not Armstrong\n";
	return 0;
}
