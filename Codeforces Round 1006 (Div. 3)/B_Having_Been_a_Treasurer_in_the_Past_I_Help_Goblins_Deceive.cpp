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
        string str;
        cin >> str;
        int underScore = 0, minus = 0;
        for (char ch : str)
        {
            if (ch == '_')
                underScore++;
            else
                minus++;
        }
        if (underScore == 0 || minus < 2)
            cout << 0 << endl;
        else
        {
            cout << (1LL * minus * minus / 4) * underScore << endl;
        }
    }
    return 0;
}