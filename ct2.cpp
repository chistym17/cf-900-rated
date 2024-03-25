#include <bits/stdc++.h>
using namespace std;

bool isSortable(const vector<int> &arr)
{
  int n = arr.size();
  for (int i = 0; i < n - 1; ++i)
  {
    if (arr[i] >= 10 && arr[i] > arr[i + 1])
    {
      string digits = to_string(arr[i]);
     
      if (i == 0 && (digits[0] > arr[i + 1] || digits[1] > arr[i + 1]))
        {
            return false;}
      else if (i > 0 && (digits[0] < arr[i - 1] || digits[1] > arr[i + 1]))
        return false;
    }
  }
  return true;
}

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; ++i)
    {
      cin >> arr[i];
    }

    if (isSortable(arr))
    {
      cout << "YES" << endl;
    }
    else
    {
      cout << "NO" << endl;
    }
  }

  return 0;
}
