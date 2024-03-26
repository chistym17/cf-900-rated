#include <bits/stdc++.h>
using namespace std;

int main()
{
int t;
cin>>t;

while(t--)
{
int n,m,i,j;
cin>>n>>m>>i>>j;

if((i==1 && j==1) || (i==n && j==m))
{
cout<<1<<" "<<m<<" ";

cout<<n<<" "<<1<<endl;


}

else
{
cout<<1<<" "<<1<<" ";

cout<<n<<" "<<m<<endl;



}

}




return 0;
}