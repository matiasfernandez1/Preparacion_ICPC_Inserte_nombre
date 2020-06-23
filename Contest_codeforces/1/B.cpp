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
#define rep(i, n) for (int i = 0; i < n; ++i)
#define REP(i, k, n) for (i = k; i <= n; ++i)
#define REPR(i, k, n) for (i = k; i >= n; --i)
#define all(v) v.begin(), v.end()
#define PB push_back
#define FF first
#define SS second
#define what_is(x) cout << #x << " is " << x << "\n";
#define end cout << "\n";

template <typename... T>
void read(T&... args) {
    ((cin >> args), ...);
}

template <typename... T>
void write(T&&... args) {
    ((cout << args << " "), ...);
}

int main() {
    // OJ;
    FIO;

    int t, n, v[40];
    read(t);
    loop(t) {
        int par = 0, impar = 0;
        read(n);
        rep(j, n) {
            read(v[j]);
            if (j % 2 == 0 and v[j] % 2 == 1) {
                par++;
            }
            if (j % 2 == 1 and v[j] % 2 == 0) {
                impar++;
            }
        }
        if (par == impar) {
            write(par);
            end;
        } else {
            write(-1);
            end;
        }
    }
    return 0;
}