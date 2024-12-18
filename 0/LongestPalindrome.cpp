#include <bits/stdc++.h>
using namespace std;

bool checkPal(const string &s, int low, int high) {
    while (low < high) {
        if (s[low] != s[high])
            return false;
        low++;
        high--;
    }
    return true;
}

string longestPalSubstr(string& s) {
  
    int n = s.size();

    int maxLen = 1, start = 0;

    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {

            if (checkPal(s, i, j) && (j - i + 1) > maxLen) {
                start = i;
                maxLen = j - i + 1;
            }
        }
    }

    return s.substr(start, maxLen);
}

// Driver Code
int main() {
    string s = "forgeeksskeegfor";
    cout << longestPalSubstr(s) << endl;
    return 0;
}