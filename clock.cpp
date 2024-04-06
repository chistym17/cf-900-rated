#include <bits/stdc++.h>

using namespace std;

bool isBinary(int num) {
    while (num > 0) {
        int digit = num % 10;
        if (digit != 0 && digit != 1)
            return false;
        num /= 10;
    }
    return true;
}

bool check(int n) {
    if (n == 1) return true; 

    if (isBinary(n)) return true;


    while (n % 2 == 0) {
        n /= 2;
    }

    for (int i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            if (!isBinary(i))
                return false;
            n /= i;
        }
    }

    if (n > 2 && !isBinary(n))
        return false;

    return true;
}

int main() {
    int t;
    cin >> t; 

    while (t--) {
        int n;
        cin >> n; 

        if (check(n)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}
