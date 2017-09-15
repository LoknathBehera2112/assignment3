#include <iostream>

using namespace std;


int main() 
{
	
char a;
	
cout<<"Enter the input: ";
	
cin>>a;
	
if((a>='a' && a<='z')  || (a>='A' && a<='Z'))
	
{
	
cout<<"This is an alphabet";

	}
	
else
	
if(a>=0 || a<=9)
	
{
	
cout<<"This is a digit";
	
}
	
else
	
cout<<"This is a special character";
	
return 0;

}
