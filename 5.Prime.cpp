

#include <iostream>

using namespace std;

bool isPrime(int n){
    
    for(int i=2;i*i<=n;i++)
    if(n%i==0) return false;
    
    return true;
}

int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;
    
    if(isPrime(n)) cout<<"Prime";
    else cout<<"Not Prime";
    
   
    

    return 0;
}

Enter n: 10
Not Prime
