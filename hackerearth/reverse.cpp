/* Terrible chandu problem to reverse a string visit : https://www.hackerearth.com/code-monk-array-strings/algorithm/terrible-chandu/*/


#include<iostream>
#include<string>
using namespace std;

int main()
{

int i,T,len;
string s;
//take value of T

cin>>T;


//Now take inputs
while(T > 0)
{
cin>>s;
len = s.size();

	for(i=len-1;i >= 0;i--)
	{
		cout<<s[i];
	}	
cout<<endl;
T--;
}
return 0;
}
