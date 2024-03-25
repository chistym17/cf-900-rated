#include <bits/stdc++.h>
using namespace std;

int main()
{
int t;
cin>>t;

while(t--)
{
int a,b,c;
cin>>a>>b>>c;

if(a==1)cout<<"YES"<<endl;
else
{
int k=abs(c-a);
if(k%b==0)cout<<"YES"<<endl;
else cout<<"NO"<<endl;

}


}




return 0;
}