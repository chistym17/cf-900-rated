#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long a, b, c;
        cin >> a >> b >> c;

        if (b == 0 && c == 0)
            cout << a << endl;
        else if (a == 0 && c == 0 || a == 0 && b == 0)
            cout << (b + c) / 3 << endl;
        else if (b >= c * 2)
            cout << (c * 2 + c + a) / 3 + (c * 2 + c + a) % 3 << endl;
        else
            cout << -1 << endl;
    }

    return 0;
}
