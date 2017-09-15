#include <iostream>
using namespace std;

int main()
{
    int n,count;

    cout << "Enter a positive integer: \n";
    cin >> n;

    while(n!=0)
    
    {
       n=n/10;
       ++count;
    }
    cout<<"\n No of digits= "<<count;
    return 0;
}
