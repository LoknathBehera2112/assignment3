#include<iostream>
using namespace std;

int main()
{
	float BS, GS, HRA, DA;
	cout<<"Enter basic salary : ";
	cin>>BS;

	if (BS<=10000)
	{
		HRA=0.2*BS;
		DA=0.8*BS;
	}
	else
	if (BS<=20000)
	{
		HRA=0.25*BS;
		DA=0.9*BS;
	}
	else
	
	{
		HRA=0.3*BS;
		DA=0.95*BS;
	}

	GS=BS+HRA+DA;
	cout<<"Gross salary is : "<<GS;

	
	return 0;
}
 

