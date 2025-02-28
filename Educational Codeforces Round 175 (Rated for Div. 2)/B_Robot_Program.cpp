#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        ll x, k;
        cin >> n >> x >> k;
        string s;
        cin >> s;

        vector<ll> v(n + 1, 0);
        for (int i = 1; i <= n; i++)
        {
            v[i] = v[i - 1] + (s[i - 1] == 'L' ? -1 : 1);
        }

        ll reset = -1;
        for (int i = 1; i <= n; i++)
        {
            if (x + v[i] == 0)
            {
                reset = i;
                break;
            }
        }

        if (reset == -1 || reset > k)
        {
            cout << "0\n";
            continue;
        }

        ll resets = 1, cnt = reset;
        ll time = -1;
        for (int j = 1; j <= n; j++)
        {
            if (v[j] == 0)
            {
                time = j;
                break;
            }
        }

        if (time == -1)
        {
            cout << resets << "\n";
            continue;
        }

        ll cycle = (k - cnt) / time;
        resets += cycle;
        cout << resets << "\n";
    }
    return 0;
}
