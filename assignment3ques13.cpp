#include <iostream>
using namespace std;
 
int main() {
	int amt,r2000,r500,r200,r100,r50,r20,r10,r5,r2,r1;
cout<<"Give total amount";
cin>>amt;
r2000=amt/2000;
amt=amt%2000;
r500=amt/500;
amt=amt%500;
r200=amt/200;
amt=amt%200;
r100=amt/100;
amt=amt%100;
r50=amt/50;
amt=amt%50;
r20=amt/20;
amt=amt%20;
r10=amt/10;
amt=amt%10;
r5=amt/5;
amt=amt%5;
r2=amt/2;
amt=amt%2;
r1=amt;
cout<<"\n The number of 2000 rs notes are "<<r2000;
cout<<"\n The number of 500 rs notes are "<<r500;
cout<<"\n The number of 200 rs notes are "<<r200;
cout<<"\n The number of 100 rs notes are "<<r100;
cout<<"\n The number of 50 rs notes are "<<r50;
cout<<"\n The number of 20 rs notes are "<<r20;
cout<<"\n The number of 10 rs notes are "<<r10;
cout<<"\n The number of 5 rs coins are "<<r5;
cout<<"\n The number of 2 rs coins are "<<r2;
cout<<"\n The number of 1 re coins are "<<r1;
 
	return 0;
}