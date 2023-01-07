/******************************************************************************
An Automorphic number is a special number, whose’s square ends with the same digits as the number itself

*******************************************************************************/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,nDt,LastNum,res;
    cout<<"Enter n";
    cin>>n;
    nDt=floor(log10(n)+1);
    res=pow(10,nDt);
    
    if((n*n)%res==n) cout<<"Automorphic";
    else cout<<"Ordinary";
    
    

    return 0;
}

Enter n 25
Automorphic
