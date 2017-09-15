#include <iostream>
using namespace std;

int main() {
	int units;
	float bill,totalbill, surcharge;
	cout<<"Enter energy units";
	cin>>units;
	 if(units <= 50)
    {
        bill = units * 0.50;
    }
    else 
    if(units <= 150)
    {
        bill = 25 + ((units-50) * 0.75);
    }
    else
    if(units <= 250)
    {
        bill = 100 + ((units-150) * 1.20);
    }
    else
    {
        bill = 220 + ((units-250) * 1.50);
    }
    surcharge=bill*0.20;
    totalbill=bill+surcharge;
	cout<<"\nBILL= "<<totalbill;
	
	
	return 0;
}
