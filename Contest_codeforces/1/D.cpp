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
    OJ;
    FIO;
    int t;
    read(t);
    loop(t) {
        string s;
        read(s);
        map<int, char> mapa;
        rep(j, s.length()) {
            int x = 0;
            rep(k, s.length()) {
                if (int(s[j] < int(s[k]))) {
                    x += abs((j + 1) - (k + 1));
                }
            }
            mapa[x] = s[j];
            write(x, "=", mapa[x]);
            end;
        }

        string sol = "";
        int m;
        read(m);
        int aux;
        rep(j, m) {
            read(aux);
            sol += mapa[aux];
        }
        write(sol);
        end;
    }

    return 0;
}