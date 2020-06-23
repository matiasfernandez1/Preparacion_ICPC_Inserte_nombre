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
    int n;
    string s;
    read(n);
    loop(n) {
        read(s);
        int x = s.length();
        string sol = "";
        sol += s[0];
        for (int j = 1; j < x - 1; j += 2) {
            sol += s[j];
        }
        sol += s[x - 1];
        write(sol);
        end;
    }
    return 0;
}