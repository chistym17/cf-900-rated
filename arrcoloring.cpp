#include <bits/stdc++.h>
using namespace std;

int main()
{
int t;
cin>>t;

while(t--)
{
int n;
cin>>n;
vector<int>arr;
map<int,int>mp;

for(int i=0;i<n;i++ )
{int num;
cin>>num;
arr.push_back(num);
}


for(int i=0;i<n;i++ )
{
mp[arr[i]]++;
}

int mx=INT_MIN;

for(auto it:mp)
{
mx=max(mx,it.second);
}

int ans=0;
while(mx<n)
{
int rem=n-mx;
int can_add=mx;
ans++;
ans+=min(can_add,rem);
mx+=min(can_add,rem);

}

cout<<ans<<endl;
}




return 0;
}