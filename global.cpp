#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;

        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
                count++;
        }


       if(count==0)cout<<"YES"<<endl;
       else if(count>=4 && count%2==0)cout<<"YES"<<endl;

       
        else if (count == 2)
        {
            bool adjacent = false;
            for (int i = 0; i < n - 1; i++)
            {
                if (s[i] == '1' && s[i + 1] == '1')
                {
                    adjacent = true;
                    break;
                }
            }
            if (adjacent)
                cout << "NO" << endl;
            else
                cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}