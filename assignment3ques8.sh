#include <iostream>
using namespace std;

int main() {
	char a;
	cout<<"Enter the word: ";
	cin>>a;
	if((a=='a' || a=='e'|| a=='i'|| a=='o'|| a=='u')  || (a=='A' || a=='E'|| a=='I'|| a=='O'|| a=='U') )
	{
	cout<<"This is an VOWEL";
	}
	else
	{
	cout<<"This is not an VOWEL";
	}
	
	return 0;
}
