#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
void solve(int i, int j, vector<vector<int>> &a, int n, vector<string> &ans, string move, vector<vector<int>> &vis, int di[], int dj[])
{
    if (i == n - 1 && j == n - 1)
    {
        ans.push_back(move);
        return;
    }
    string dir = "DLRU";
    for (int ind = 0; ind < 4; ind++)
    {
        int nexti = i + di[ind];
        int nextj = j + dj[ind];
        if (nexti >= 0 && nextj >= 0 && nexti < n && nextj < n && !vis[nexti][nextj] && a[nexti][nextj] == 1)
        {
            vis[i][j] == 1;
            solve(nexti, nextj, a, n, ans, move + dir[ind], vis, di, dj);
        }
    }
}
vector<string> findpath(vector<vector<int>> &m, int n)
{

    vector<string> ans;
    vector<vector<int>> vis(n, vector<int>(n, 0));
    int di[] = {+1, 0, 0, -1};
    int dj[] = {0, -1, 1, 0};
    if (m[0][0] == 1)
        solve(0, 0, m, n, ans, "", vis, di, dj);
    return ans;
}

int main()
{

    int n;
    std::cout << "Enter the size of the maze: ";
    std::cin >> n;
    vector<vector<int>> m(n, vector<int>(n));
    std::cout << "Enter the maze (1 for path, 0 for wall):" << std::endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            std::cin >> m[i][j];
        }
    }
    vector<string> paths = findpath(m, n);
    if (paths.empty())
    {
        std::cout << "No path found." << std::endl;
    }
    else
    {
        std::cout << "Paths found:" << std::endl;
        for (const auto &path : paths)
        {
            std::cout << path << std::endl;
        }
    }

    return 0;
}