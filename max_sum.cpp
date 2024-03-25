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

for(int i=0;i<n;i++ )
{int num;
cin>>num;
arr.push_back(num);
}
int curr=0;
int ans=0;

for(int i=0;i<n;i++)
{
curr+=arr[i];
ans=max(ans,curr);

if(curr<0)
curr=0;


}


}




return 0;
}