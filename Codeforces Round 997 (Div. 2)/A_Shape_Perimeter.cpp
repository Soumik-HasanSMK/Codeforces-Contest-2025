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
        int m, n;
        cin >> m >> n;
        vector<int> v1(m), v2(m);
        int s = 0, r = 0;
        for (int i = 0; i < m; i++)
            cin >> v1[i] >> v2[i];
        int sum = 0;
        for (int i = 0; i < m-1; i++)
        {
            sum += (2 * (2 * n - (v1[i+1] + v2[i+1])));
        }
        cout << 4 * m * n - sum << endl;
    }
    return 0;
}