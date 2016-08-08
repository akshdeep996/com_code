/* Prateek and his friends
https://www.hackerearth.com/code-monk-array-strings/algorithm/prateek-and-his-friends/


  */






#include<iostream>
using namespace std;

int main() {

int t,n,x,c=0;
int a[100];
cin>>t;
a[0]=44;
for(int i=0;i<t;i++)
{
cin>>n>>x;
for(int j=1;j<n+1;j++)
{
cin>>a[j];
}
for(int k=1;k<n+1;k++)
{
if(a[k]==a[k+1]-1 || a[k]==a[k-1]+1)
{
c+=a[k];
}
}
if(c==x)
{
cout<<"YES\n";
}
else
{
cout<<"NO\n";
}
}
}
