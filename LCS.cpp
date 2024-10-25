#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int LCS(string &str1, string &str2, int i, int j, vector<vector<int>> &dp) {
        if (i < 0 || j < 0) return 0;
        if (dp[i][j] != -1) return dp[i][j];
        else if (str1[i] == str2[j]) return dp[i][j] = 1 + LCS(str1, str2, i - 1, j - 1, dp);
        else return dp[i][j] = max(LCS(str1, str2, i - 1, j, dp), LCS(str1, str2, i, j - 1, dp));
    }

    int longestCommonSubsequence(string text1, string text2) {
        int n = text1.length();
        int m = text2.length();
        vector<vector<int>> dp(n, vector<int>(m, -1));
        return LCS(text1, text2, n - 1, m - 1, dp);
    }

int main(){
    string text1 ="abcde";
    string text2 ="bde";
    cout<<longestCommonSubsequence(text1,text2)  ;  
    return 0;
}