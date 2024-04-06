#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;

    // If k is greater than 1, it's impossible to achieve k sorted cyclic shifts
    if (k > 1 || n < k) {
        cout << -1 << endl;
        return;
    }

    vector<int> a(n);

    // Set the first k elements as [1, 2, ..., k]
    for (int i = 0; i < k; ++i) {
        a[i] = i + 1;
    }

    // Set the remaining elements in descending order
    for (int i = k; i < n; ++i) {
        a[i] = n - i + k - 1;
    }

    // Output the array
    for (int i = 0; i < n; ++i) {
        cout << a[i] << " ";
    }
    cout << endl;
}

int
#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;

    // If k is greater than 1, it's impossible to achieve k sorted cyclic shifts
    if (k > 1 || n < k) {
        cout << -1 << endl;
        return;
    }

    vector<int> a(n);

    // Set the first k elements as [1, 2, ..., k]
    for (int i = 0; i < k; ++i) {
        a[i] = i + 1;
    }

    // Set the remaining elements in descending order
    for (int i = k; i < n; ++i) {
        a[i] = n - i + k - 1;
    }

    // Output the array
    for (int i = 0; i < n; ++i) {
        cout << a[i] << " ";
    }
    cout << endl;
}

int
