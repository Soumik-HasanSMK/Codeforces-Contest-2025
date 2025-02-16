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
        int n, m;
        cin >> n >> m;
        vector<ll> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];

        ll b;
        cin >> b;
        if (n == 1)
        {
            cout << "YES\n";
            continue;
        }
        bool flag1 = true, flag2 = true;
        ll smk1 = v[0], smk2 = b - v[0];
        for (int i = 1; i < n; i++)
        {
            ll x1 = v[i];
            ll x2 = b - v[i];
            bool spam1 = false, spam2 = false;
            if (flag1 == true && smk1 <= x1)
                spam1 = true;
            if (flag2 == true && smk2 <= x1)
                spam1 = true;
            if (flag1 == true && smk1 <= x2)
                spam2 = true;
            if (flag2 == true && smk2 <= x2)
                spam2 = true;

            flag1 = spam1;
            flag2 = spam2;
            smk1 = x1;
            smk2 = x2;
        }
        cout << ((flag1 || flag2) ? "YES" : "NO") << endl;
    }
    return 0;
}