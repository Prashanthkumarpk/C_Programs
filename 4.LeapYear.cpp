#include <iostream>

using namespace std;

int main()
{
    
    int n;
    cout<<"Enter year";
    cin>>n;
    
    if(n%100!=0 && n%4==0 || n%400==0) cout<<"leap year";
    else cout<<"Not a leap year";

    return 0;
}

Enter year1800
Not a leap year
