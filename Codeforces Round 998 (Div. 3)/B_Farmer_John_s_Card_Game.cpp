#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;

        vector<vector<int>> cows(n);
        for (int i = 0; i < n; i++)
        {
            cows[i].resize(m);
            for (int j = 0; j < m; j++)
            {
                cin >> cows[i][j];
            }
        }
        vector<int> v;
        set<pair<int, int>> mp;
        for (int i = 0; i < n; i++)
        {
            sort(cows[i].begin(), cows[i].end());
            v.push_back(cows[i][0]);
            v.push_back(cows[i][cows[i].size() - 1]);
            mp.insert({cows[i][0], i + 1});
        }

        sort(v.begin(), v.end());
        bool valid = true;
        int mn = v[0];
        int mx = v[v.size() - 1];
        for (int i = 0; i < n; i++)
        {
            if (mn == cows[i][0] && mx == cows[i][cows[i].size() - 1])
            {
                valid = false;
                break;
            }
        }

        if (valid || n == 1)
        {
            for (auto &x : mp)
            {
                cout<<x.second<<" ";
            }
        }
        else
        {
            cout << -1;
        }
        cout << endl;
    }

    return 0;
}
