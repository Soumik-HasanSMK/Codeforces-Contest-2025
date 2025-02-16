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
        ll a, b;
        cin >> a >> b;
        if (a == 1 && b == 1)
        {
            cout << 1 << endl;
        }
        else
        {
            ll s = abs(a - b);
            cout << s << endl;
        }
    }
    return 0;
}