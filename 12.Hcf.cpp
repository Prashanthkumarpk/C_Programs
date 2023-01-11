
#include <iostream>
using namespace std;

int main()
{
   
   
   int n,m,hcf;
   cout<<"enter n: ";
   cin>>n>>m;
   
   
for(int i=1;i<=n&&i<=m ;i++){
    if(n%i==0 && m%i==0) hcf=i;
}
cout<<"hcf is: "<<hcf;
    return 0;
}

enter n: 36 60
hcf is: 12
