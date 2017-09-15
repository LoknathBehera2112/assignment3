#include <iostream>

using namespace std;


int main() {
	
//Program to print Fibonacci series up to n terms
	
int f1=0,f2=1,f3=0,n,i;
	
cout<<"Enter n";
	
cin>>n;
	
cout<<"Fibonacci series\n";
	
cout<<f1<<" "<<f2<<" ";

	for(i=3; i<=n; i++)

	{
		
f3=f1+f2;
		
cout<<f3<<" ";
		
f1=f2;
		
f2=f3;

	}
	
return 0;
}