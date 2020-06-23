#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)n; i++)
#define REP(i, k, n) for (i = k; i <= n; ++i)
#define REPR(i, k, n) for (i = k; i >= n; --i)
using ll = long long;
typedef pair<int, int> ii;
typedef vector<ii> vii;
#define inf int(1e8)

int main() {
    int e, v;
    cin >> v >> e;
    vector<vii> AdjList(v, vii());  //tenemos v nodos con ni idea conexions
    int a, b;
    for (int i = 0; i < e; i++) {
        cin >> a >> b;
        AdjList[a - 1].emplace_back(b - 1, 1);
        AdjList[b - 1].emplace_back(a - 1, 1);
    }
    vector<int> dist(v, inf);
    queue<int> q;
    dist[0] = 0;
    q.push(0);
    while (!q.empty()) {
        int u = q.front();
        q.pop();
        for (int i = 0; i < AdjList[u].size(); i++) {
            ii x = AdjList[u][i];
            if (dist[x.first] > 1 + dist[u]) {
                dist[x.first] = 1 + dist[u];
                q.push(x.first);
            }
        }
    }
    cout << dist[v - 1] - 1 << endl;

    return 0;
}
