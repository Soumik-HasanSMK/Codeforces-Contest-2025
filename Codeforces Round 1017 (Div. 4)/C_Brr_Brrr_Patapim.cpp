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
        vector<int> v(2 * n + 1);
        vector<int> vec(2 * n + 1);
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= n; j++)
            {
                int num;
                cin >> num;
                int ind = i + j;
                if (!v[ind])
                {
                    v[ind] = num;
                    vec[num] = 1;
                }
            }
        for (int i = 1; i <= 2 * n; i++)
            if (!vec[i])
            {
                cout << i << ' ';
                break;
            }
        for (int i = 2; i <= 2 * n; i++)
            cout << v[i] << ' ';
        cout << endl;
    }
    return 0;
}
