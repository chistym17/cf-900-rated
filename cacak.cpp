#include <bits/stdc++.h>
using namespace std;

int main()
{
int t;
cin>>t;

while(t--)
{
int n,m,k;
cin>>n>>m>>k;
vector<int>a,b;

int pairs=0;
for(int i=0;i<n;i++)
{
int num;
cin>>num;
a.push_back(num);
}

for(int i=0;i<m;i++)
{
int num;
cin>>num;
b.push_back(num);

}

for(int i=0;i<n;i++)
{
if(a[i]<k)
{
for(int j=0;j<m;j++)
{
if(b[j]<=k-a[i])pairs++;

}

}

}



cout<<pairs<<endl;




}




return 0;
}