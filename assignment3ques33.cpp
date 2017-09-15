#include <iostream>
using namespace std;

int main() {
long num, firstDigit, lastDigit, sum;

   
    cout<<"Enter any number";
    cin>>num;
    lastDigit = num % 10;
    firstDigit = num;
    while(  firstDigit >= 10)
    {
          firstDigit =   firstDigit/ 10;
    }
    sum=firstDigit+lastDigit;
    cout<<"\nfirst number"<<firstDigit;
     cout<<"\nlast number"<<lastDigit;
     cout<<"\nSum :"<<sum;
	return 0;
}
