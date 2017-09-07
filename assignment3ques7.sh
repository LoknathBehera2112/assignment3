#include <iostream>
using namespace std;

int main() {
	char a;
	cout<<"Enter the word: ";
	cin>>a;
	if((a>='a' && a<='z')  || (a>='A' && a<='Z'))
	{
	cout<<"This is an alphabet";
	}
	else
	{
	cout<<"This is not an alphabet";
	}
	
	return 0;
}
