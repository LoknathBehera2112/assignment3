#include <iostream>
using namespace std;

int main() {
	//  Program to enter any number and print its reverse
	int n,d,rev=0;
	cout<<"Enter n=";
	cin>>n;
	while(n)
	{
	d=n%10;
	rev=rev*10+d;
	n=n/10;
	cout<<"Reversed the entered number="<<rev<<endl;
	}
	return 0;
