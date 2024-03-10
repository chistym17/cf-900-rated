#include <bits/stdc++.h>
using namespace std;

int main()
{
int t;
cin>>t;

while(t--)
{
long long n,k,x;
cin>>n>>k>>x;


long long mini=k*(k+1);
long long diff=n-k;
long long maxi=n*(n+1)-diff*(diff+1);

x=x*2;

if(x>=mini && x<=maxi)cout<<"YES"<<endl;
else cout<<"NO"<<endl;


}




return 0;
}