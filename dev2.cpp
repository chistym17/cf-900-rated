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

int bridge=(n*(n-1))/2;
if(k==0)
{
cout<<n<<endl;

}
else if(k>=bridge)
{
cout<<1<<endl;

}
else
{
if(k>=n-1)cout<<1<<endl;
else{
cout<<n<<endl;

}

}


}




return 0;
}