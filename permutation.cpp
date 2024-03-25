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
vector<int>sorted;
vector<int>diff;

for(int i=0;i<n;i++ )
{int num;
cin>>num;
arr.push_back(num);
sorted.push_back(num);
}

sort(sorted.begin(),sorted.end());

for(int i=0;i<n;i++)
{
diff.push_back(abs(arr[i]-sorted[i]));

}

int result=diff[0];

for(int i=1;i<n;i++)
{
result=__gcd(result,diff[i]);

}

cout<<result<<endl;
}




return 0;
}