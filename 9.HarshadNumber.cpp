/******************************************************************************

                             Harshad Number in C++ 
A Harshad number is a positive integer that is divisible by the sum of the digits of the integer. 
It is also called the Niven number.
*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int n,s=0,t,r;
    cout<<"Enter n: ";
    cin>>n;
    t=n;
    while(n!=0){
        r=n%10;
        s+=r;
        n/=10;
    }
    if(t%s==0)cout<<"Harshad number";
    else cout<<"Ordinary Number";
    
    
    

    return 0;
}

Enter n: 153
Harshad number
