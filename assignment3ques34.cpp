#include <iostream>
using namespace std;

int main() {
	//  Program to swap first and last digits of any number
	int a,b;
	cout<<"Enter a & b"<<endl;
	cin>>a>>b;
	cout<<"Before Swapping \n";
	cout<<"a="<<a<<"b="<<b<<endl;
	a=a+b;
	b=a-b;
	a=a-b;
	cout<<"After Swapping \n";
	cout<<"a="<<a<<"b="<<b<<endl;
	return 0;
}
