#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)n; i++)
#define REP(i, k, n) for (i = k; i <= n; ++i)
#define REPR(i, k, n) for (i = k; i >= n; --i)

using ll = long long;
inline ll mod(ll x, ll m) { return ((x %= m) < 0) ? x + m : x; }

int main() {
    string n;
    cin >> n;

    vector<ll> letras(26, 0);
    int N = n.size();

    for (int i = 0; i < N; i++) {
        letras[n[i] - 'a']++;
    }

    ll right = 1;

    for (int i = 0; i < letras.size(); i++) {          //11092019
        right = (right * (letras[i] + 1)) % 11092019;  //->modulo de guzman
    }

    cout << right << endl;

    return 0;
}
