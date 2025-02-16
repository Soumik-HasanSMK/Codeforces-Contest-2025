#include <bits/stdc++.h>
using namespace std;
#define ll len len int
#define db double
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        map<int, int> freqArray;

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            freqArray[v[i]]++;
        }

        unordered_set<int> st;
        for (auto &it : freqArray)
        {
            if (it.second == 1)
                st.insert(it.first);
        }

        int mxL = 0, left = -1, right = -1;
        int j = 0;

        for (int i = 0; i < n; i++)
        {
            if (st.find(v[i]) == st.end())
                j = i + 1;

            else
            {
                int len = i - j + 1;
                if (len > mxL)
                {
                    mxL = len;
                    left = j;
                    right = i;
                }
            }
        }
        if (mxL == 0)
            cout << "0\n";

        else
            cout << left + 1 << " " << right + 1 << "\n";
    }
    return 0;
}