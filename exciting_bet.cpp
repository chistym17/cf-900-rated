#include <bits/stdc++.h>
using namespace std;

int main()
{
int t;
cin>>t;

while(t--)
{
long long a,b;
cin>>a>>b;

long long diff=abs(a-b);
if(a==b)cout<<0<<" "<<0<<endl;
else
{
long long x=a%diff;
long long y=b%diff;

if(x!=y)cout<<0<<" "<<0<<endl;
else
{
long long ans=min(x,diff-x);
cout<<diff<<" "<<ans<<endl;


}

}


}




return 0;
}