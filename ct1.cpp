#include <bits/stdc++.h>
using namespace std;



string generate_special_string(int n) {
          string result = "";
        for (int i = 0; i < n / 4; ++i) {
            result += "AABB";
        }
        for (int i = 0; i < n % 4 / 2; ++i) {
            result += "AA";
        }
        return result;
    
}



int main()
{
int t;
cin>>t;

while(t--)
{
int n;
cin>>n;
if(n%2==1){
cout<<"No"<<endl;


}

else
{

cout<<"YES"<<endl;
cout<<generate_special_string(n)<<endl;


}


}




return 0;
}