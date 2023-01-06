#include <iostream>

using namespace std;

long fact(int n){
    long a=1;
    for(int i=1;i<=n;i++){
        a*=i;
    }
    return a;
}


int main()
{
    long n,t,s=0,r;
    cout<<"ENTER N: ";
    cin>>n;
    
t=n;

while(n>0){
    r=n%10;
    s+=fact(r);
    cout<<s<<"  ";
    n=n/10;
}


if(s==t) cout<<"strong number";
else cout<<"Not a strong number";

}

a strong number is number sum of factorial of digits is equal to number
145= 1!+4!+5!
