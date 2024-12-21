#include <bits/stdc++.h>
using namespace std;

string rremove(string s) {
   
    string sb = ""; 
    int n = s.size(); 

    for (int i = 0; i < n; i++) {
        bool repeated = false;

        while (i + 1 < n && s[i] == s[i + 1]) {
            repeated = true; 
            i++;  
        }

        if (!repeated) sb += s[i];
    }
    if (n == sb.length())
        return sb;
    
}

int main() {
    string s = "geeksforgeek";  
    string result = rremove(s);  
    cout << result << endl;
    
    return 0;
}