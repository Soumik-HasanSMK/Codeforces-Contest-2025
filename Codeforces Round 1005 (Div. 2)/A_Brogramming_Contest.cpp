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
        int n;
        cin >> n;
        string s;
        cin >> s;
        int cnt = 0;
        for (int i = 1; i < n; i++)
        {
            if (s[i] != s[i - 1])
                cnt++;
        }
        if (s[0] == '1')
            cnt++;

        cout << cnt << endl;
    }
    return 0;
}