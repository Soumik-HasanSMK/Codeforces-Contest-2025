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
        ll n, l, r;
        cin >> n >> l >> r;
        vector<ll> v;
        for (ll i = 0; i < n; i++)
        {
            ll a;
            cin >> a;
            v.push_back(a);
        }

        vector<ll> v1, v2;
        for (ll i = 0; i < r; i++)
        {
            v.push_back(v[i]);
        }
        for (ll i = l - 1; i < n; i++)
        {
            v.push_back(v[i]);
        }
        ll s1 = 0, s2 = 0, ans;
        for (auto x : v1)
            s1 += x;
        for (auto x : v2)
            s2 += x;
        ans = min(s1, s2);
        cout << ans << endl;
    }
    return 0;
}