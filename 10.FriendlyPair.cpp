/******************************************************************************




*******************************************************************************/
#include <iostream>

using namespace std;


int main()
{
    int n,o;
   cout<<"Enter n,n2: ";
   
cin>>n>>o;

int s1=0,s2=0;

for(int i=1;i<n;i++)
{
   if(n%i==0)s1+=i;
   
}

for(int i=1;i<o;i++)
{
   if(o%i==0)s2+=i;
   
}

if(s1%n==s2%o) cout<<"Friendly pair";
 
 else cout<<"Ordinary pair"  ;
    return 0;
}


Example: 6 and 28 are friendly pairs because

(Sum of divisors of 6)/6 = (Sum of divisors of 28)/28

(1 + 2 + 3)/ 6 = (1 + 2 + 4 + 7 + 14)/ 28

1 = 1
