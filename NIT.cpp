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

bool flag = all_of(arr.begin(), arr.end(), [](int x){ return x == 0; });
if(flag)
{
cout<<0<<endl;
continue;

}

 bool flag2 = all_of(arr.begin(), arr.end(), [](int x){ return x != 0; });

if(flag2)
{
cout<<1<<endl;
continue;

}


int count = 0;
for (int i = 0; i < n; i++) {
    if (arr[i] != 0 && (i == 0 || arr[i - 1] == 0))
        count++;
}

if(count==1)cout<<1<<endl;
else cout<<2<<endl;

}




return 0;
}