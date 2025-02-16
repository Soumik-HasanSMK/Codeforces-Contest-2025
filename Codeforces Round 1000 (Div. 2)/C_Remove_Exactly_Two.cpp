#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>
using namespace std;
void fun()
{
    int n;
    cin >> n;

    vector<int> degree(n + 1, 0);
    vector<vector<int>> adjacency(n + 1);

    for (int i = 0; i < n - 1; ++i)
    {
        int u, v;
        cin >> u >> v;
        adjacency[u].push_back(v);
        adjacency[v].push_back(u);
        degree[u]++;
        degree[v]++;
    }

    vector<int> vertices(n);
    for (int i = 1; i <= n; ++i)
        vertices[i - 1] = i;
    sort(vertices.begin(), vertices.end(), [&](int a, int b)
         { return degree[a] > degree[b]; });

    int K = min(n, 200);
    vector<int> topK(vertices.begin(), vertices.begin() + K);

    vector<int> indexInTop(n + 1, -1);
    for (int i = 0; i < K; ++i)
        indexInTop[topK[i]] = i;

    vector<unordered_set<int>> topAdj(K);
    for (int i = 0; i < K; ++i)
    {
        int u = topK[i];
        for (int v : adjacency[u])
        {
            if (indexInTop[v] != -1)
            {
                topAdj[i].insert(v);
            }
        }
    }

    int bestPair = 0;
    for (int i = 0; i < K; ++i)
    {
        for (int j = i + 1; j < K; ++j)
        {
            int u = topK[i], v = topK[j];
            int sum = degree[u] + degree[v];
            if (topAdj[i].count(v))
            {
                sum -= 1;
            }
            bestPair = max(bestPair, sum);
        }
    }

    cout << bestPair - 1 << "\n";
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        fun();
    }

    return 0;
}