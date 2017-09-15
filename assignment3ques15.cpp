#include <iostream>
using namespace std;

int main() {
	int side1,side2,side3;
	cout<<"\nEnter the three sides";
	cin>>side1>>side2>>side3;
	if((side1+side2>side3)&&(side2+side3>side1)&&(side3+side1>side2))
	{cout<<"\nSides are valid";
	}
	else
	{cout<<"\nSides are not valid";
	}

	return 0;
}
