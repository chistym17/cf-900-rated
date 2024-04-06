#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;

        int odd= 0;
        int even=0;
        int n = s.length();

        for (int i = 0; i < n ; i++)
        {
          if(s[i]=='0')even++;
          else odd++;
        }

       if(min(even,odd)%2==0)cout<<"NET"<<endl;
       else  cout<<"DA"<<endl;

    }

    return 0;
}