#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define db double
int fun(int a, int b, int c, int d, int e)
{
    int cnt = 0;
    if (c == a + b)
        cnt++;
    if (d == b + c)
        cnt++;
    if (e == c + d)
        cnt++;
    return cnt;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d, e;
        cin >> a >> b >> d >> e;
        int ans = 0;
        for (c = -200; c <= 200; c++)
        {
            ans = max(ans, fun(a, b, c, d, e));
        }
        cout << ans << endl;
    }
    return 0;
}