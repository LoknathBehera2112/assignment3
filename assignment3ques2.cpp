#include 
<iostream>
using namespace std;


int main() {
	
int a, b, c, big;
	
cout<<"Enter three number : ";

	cin>>a>>b>>c;
	
if(a>b&a>c)
	{

		big=a;
	
}
	else
	
if(b>a&b>c)
	
{
		big=b;
	}
	
if(c>a&c>b)
	{
		
big=c;
	}
	
cout<<"Biggest of the two number is "<<big;

	return 0;
}
