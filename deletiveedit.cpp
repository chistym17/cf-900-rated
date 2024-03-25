#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool can_get_final_word(const string& s, const string& t) {
    // Count occurrences of each letter in both words
    vector<int> sa(26, 0), ta(26, 0);
    for (char c : s)
        sa[c - 'A']++;
    for (char c : t)
        ta[c - 'A']++;

    // Check if it's possible to reach the final word
    for (int i = 0; i < 26; ++i) {
        if (sa[i] < ta[i])
            return false;
    }

    // Simulate the game to check the order of letters
    string result;
    for (char c : s) {
        if (ta[c - 'A'] > 0) {
            ta[c - 'A']--;
            result.push_back(c);
        }
    }

    return result == t;
}

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        string s, t;
        cin >> s >> t;
        if (can_get_final_word(s, t))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
