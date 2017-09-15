#include <iostream>
using namespace std;

int main() {
	int phy,chem,bio,math,comp;
	float per;
	cout<<"Enter marks in phy chem bio math comp";
	cin>>phy>>chem>>bio>>math>>comp;
	per=(phy+chem+bio+math+comp)/5;
	if(per >= 90)
    {
        cout<<"\nGrade A";
    }
    else if(per >= 80)
    {
        cout<<"\nGrade B";
    }
    else if(per >= 70)
    {
        cout<<"\nGrade C";
    }
    else if(per >= 60)
    {
        cout<<"\nGrade D";
    }
    else if(per >= 40)
    {
        cout<<"\nGrade E";
    }
    else
    {
        cout<<"\nGrade F";
    }

	return 0;
}
