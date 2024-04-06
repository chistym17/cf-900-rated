#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, x;
        cin >> n >> x;
        vector<int> arr;
        long long sum = 0;
        
        for (int i = 0; i < n; i++) {
            int num;
            cin >> num;
            arr.push_back(num);
            sum += num;
        }

        long long mini = ceil(static_cast<double>(sum) / x); 
        long long maxi = 0;

        for (int i = 0; i < n; i++) {
            maxi += ceil(static_cast<double>(arr[i]) / x); 
        }

        cout << mini << " " << maxi << endl;
    }

    return 0;
}
