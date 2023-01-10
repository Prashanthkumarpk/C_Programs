Abundant number is an number in which the sum of the proper divisors of the number is greater than the number itself.

#include <iostream>

using namespace std;

int main()

{
    int n,s=0;
    cout<<"enter n: ";
    cin>>n;
  
  for (int i=1;i<n;i++){
      if(n%i==0)s+=i;
  }  

  if(s>n) cout<<"Abundant number: ";
  else cout<<"Ordinary Number";
    
    
    
    return 0;
}

enter n: 12
Abundant number: 
