#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define db double

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string p, s;
        cin >> p >> s;
        int lp = p.size(), ls = s.size();
        bool flag = true;
        int x = 0, y = 0;

        while (x < lp && y < ls)
        {
            if (p[x] != s[y])
            {
                flag = false;
                break;
            }
            if (y + 1 < ls && s[y] == s[y + 1])
                y += 2;
            else
                y++;
            x++;
        }

        if (x != lp || y != ls)
            flag = false;

        cout << (flag ? "YES\n" : "NO\n");
    }
    return 0;
}
