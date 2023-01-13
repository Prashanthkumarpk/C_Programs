

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,digit=0,r;
    int long longn;
    cout<<"Enter n value: ";
    cin>>n;
    
    for(int i=0;n!=0;n/=10){
      
      r=n%10;
      digit+=r*pow(2,i);
      i++;
        
    }
    cout<<"Number is: "<<digit;
    
    
    

    return 0;
}


Enter n value: 1111
Number is: 15
