#include <bits/stdc++.h>
using namespace std;

int main()
{
int t;
cin>>t;

while(t--)
{
long long n;
cin>>n;

 if(n%2!=0 || n<4)cout<<-1<<endl;

else
{
long long mini=0,maxi=0;
maxi=n/4;
mini=n/6;

if(n%6!=0)mini++;

cout<<mini<<" "<<maxi<<endl;

}

}




return 0;
}