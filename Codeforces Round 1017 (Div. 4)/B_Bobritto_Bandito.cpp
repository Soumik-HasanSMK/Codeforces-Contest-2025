#include <bits/stdc++.h> // Includes all standard libraries
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        int x;
        if (b <= -c)
            x = b;
        else
            x = -c;
        cout << -x << " " << b - x << endl;
    }
    return 0;
}
