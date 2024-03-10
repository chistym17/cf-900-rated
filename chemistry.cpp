#include <bits/stdc++.h>
using namespace std;

int main()
{
int t;
cin>>t;

while(t--)
{
int n,k;
cin>>n>>k;

string s;
cin>>s;

map<char,int>mp;
for(int i=0;i<n;i++)
{
mp[s[i]]++;
}

int cnt=0;
for(auto it:mp)
{
if(it.second%2==1)cnt++;
}


if(cnt>k+1)cout<<"NO"<<endl;
else cout<<"YES"<<endl;

}




return 0;
}