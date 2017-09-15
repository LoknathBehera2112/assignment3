#include <iostream>
using namespace std;

int main() {
	int side1,side2,side3;
	cout<<"\nEnter the three sides";
	cin>>side1>>side2>>side3;
	if((side1==side2)&&(side2==side3)&&(side3==side1))
	{cout<<"\nTriangle is equilateral";
	}
	else
	if((side1==side2)||(side2==side3)||(side3==side1))
	{cout<<"\nTriangle is isosceles";
	}
	else
	
	{cout<<"\nTriangle is scalene";
	}
	

	return 0;
}
