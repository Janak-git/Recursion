#include <bits/stdc++.h>
using namespace std;

void permuteRec(string& s, int idx)
{
    // Base case
    if (idx == s.size() - 1) {
        cout << s << endl;
        return;
    }

    for (int i = idx; i < s.size(); i++) {
      
        swap(s[idx], s[i]);

        permuteRec(s, idx + 1);

        swap(s[idx], s[i]);
    }
}

void permute(string& s) {
    permuteRec(s, 0);
}

int main(){
    string s = "123";
    permute(s);
    return 0;
}