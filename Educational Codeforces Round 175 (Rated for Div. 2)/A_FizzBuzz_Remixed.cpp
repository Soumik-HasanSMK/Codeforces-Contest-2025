#include <iostream>
using namespace std;

#define ll long long int

int func(ll n)
{
    ll x = (n / 15) * 3;
    ll cnt = 0;

    for (ll i = (n / 15) * 15; i <= n; i++)
    {
        if (i % 3 == i % 5)
            cnt++;
    }

    return x + cnt;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        cout << func(n) << '\n';
    }
    return 0;
}