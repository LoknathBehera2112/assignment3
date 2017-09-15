#include <iostream>
using namespace std;

int main() {
	int i,n,sum=0;
	cout<<"Enter the number";
	cin>>n;
	for(i=2;i<=n;i=i+2)
	{
	sum=sum+i;
	}
	cout<<"\nsum is "<<sum;
	return 0;
}
