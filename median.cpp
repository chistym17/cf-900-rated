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
sort(arr.begin(),arr.end());
int count=0;

int md;
if(n%2==0)md=n/2-1;
else md=n/2;

for(int i=md;i<n;i++)
{
if(arr[md]==arr[i])count++;

}
cout<<count<<endl;

}




return 0;
}