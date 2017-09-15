#include <iostream>
using namespace std;

int main() {
	// Program to convert Binary to Hexadecimal number system
	long int n,s,m;
	public:
	void Input();
	void Convert();
	void Output();
};
void  Hexadecimal::Input()
{
	cout<<"enter n=";
	cin>>n;
}
void Hexadecimal::Convert();
{
	
	s=0;
	m=1;
	while(n>0) 
}
	int d=n%10;
	s=s+d*m;
	m=m*8;
	}
	}
      void Hexadecimal::Output();
      {
      	cout<<"hexadecimal="<<s<<endl;
      }
      void main()
      {
      	Hexadecimal H;
      	H.Input();
      	H.Convert();
      	H.Output();
      }
	return 0;
}
