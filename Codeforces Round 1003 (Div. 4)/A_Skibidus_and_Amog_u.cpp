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
        string s;
        cin >> s;
        int n = s.length();
        for (int i = 0; i < n; i++)
        {
            if (s[n-2] == 'u' && s[n-1] == 's')
            {
                s[n-2] = 'i';
            }
        }
        s.pop_back();
        cout << s << endl;
    }
    return 0;
}