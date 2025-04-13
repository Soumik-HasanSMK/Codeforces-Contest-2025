#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define db double

int main()
{
    int n;
    cin >> n;
    cin.ignore();
    for (int i = 0; i < n; i++)
    {
        string str;
        getline(cin, str);
        stringstream ss(str);
        string word;
        string ans = "";
        while (ss >> word)
        {
            ans += word[0];
        }
        cout << ans << endl;
    }

    return 0;
}
