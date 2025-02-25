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
        int n, k, p;
        cin >> n >> k >> p;
        k = abs(k);
        int ans = 0;
        if (n * p < k)
            cout << -1 << endl;

        else
        {
            ans = ceil(k * 1.0 / p);
            cout << ans << endl;
        }
    }
    return 0;
}