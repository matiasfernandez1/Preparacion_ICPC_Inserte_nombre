#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;

#define OJ                            \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
#define FIO                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);                   \
    cout.precision(4);

typedef vector<int> vi;
typedef pair<int, int> pii;
typedef long long ll;
#define loop(h) for (int i = 0; i < h; i++)
#define rep(i, n) for (i = 0; i <= n; ++i)
#define REP(i, k, n) for (i = k; i <= n; ++i)
#define REPR(i, k, n) for (i = k; i >= n; --i)
#define all(v) v.begin(), v.end()
#define PB push_back
#define FF first
#define SS second
#define what_is(x) cerr << #x << " is " << x << "\n";
#define end cout << "\n";

template <typename... T>
void read(T&... args) {
    ((cin >> args), ...);
}

template <typename... T>
void write(T&&... args) {
    ((cout << args << " "), ...);
}

vector<ll> a;
ll brochazo(ll l, ll r, ll H) {
    ll hmin = 1e9 + 1;
    ll i;
    REP(i, l, r) {
        hmin = min(hmin, a[i]);
    }
    ll sol = hmin - H;
    ll l1 = l;
    REP(i, l, r) {
        if (a[i] == hmin) {
            sol += brochazo(l1, i - 1, hmin);
            l1 = i + 1;
        }
    }
    if (l1 != r + 1) sol += brochazo(l1, r, hmin);

    return min(sol, (r - l + 1));
}

int main() {
    // OJ;
    FIO;
    ll n;
    read(n);
    a.resize(n);
    loop(n) read(a[i]);
    write(brochazo(0, n - 1, 0));
    end;

    return 0;
}