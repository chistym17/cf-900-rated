#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, q;
        cin >> n >> q;
        vector<long long> arr(n);
        vector<long long> psum(n);

        long long totalSum = 0;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        psum[0] = arr[0];
        for (int i = 1; i < n; i++) {
            psum[i] = arr[i] + psum[i - 1];
        }

        while (q--) {
            int l, r, k;
            cin >> l >> r >> k;

            long long prev = 0, curr = 0, next = 0, sum = 0;

            // Adjust for 1-based indexing of queries
            l--;
            r--;

            if (l > 0)
                prev = psum[l - 1];
            curr = (r - l + 1) * static_cast<long long>(k);
            next = psum[n - 1] - psum[r];

            sum = prev + curr + next;

            if (sum % 2 == 1)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }

    return 0;
}
