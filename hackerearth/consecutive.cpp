/* Consecutive letters visit: https://www.hackerearth.com/code-monk-array-strings/algorithm/chandu-and-consecutive-letters/*/



#include<iostream>
using namespace std;

int main() 
{
	
string s;
int t,l;

cin>>t;

while(t>0)
{

cin>>s;
l = s.size();

for(int i=0;i<l;i++)
{
	if(s[i]!=s[i+1])
	{
		cout<<s[i];
	}
}
cout<<endl;
t--;

}

}
