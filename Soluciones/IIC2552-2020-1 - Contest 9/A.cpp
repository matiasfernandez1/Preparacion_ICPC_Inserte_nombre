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
void read(T &... args) {
    ((cin >> args), ...);
}

template <typename... T>
void write(T &&... args) {
    ((cout << args << " "), ...);
}

int main() {
    OJ;
    FIO;
    int n, k;
    read(n, k);  //aaaaaaa
    if (k % 2 == 0) {
        write(-1);
        end;
    } else {
        if (((k + 1) / 2 - 1) >= n) {
            write(-1);
            end;
            return 0;
        }
        int v[n];  //
        loop(n) {
            v[i] = i + 1;
        }
        loop((k + 1) / 2 - 1) {
            swap(v[i], v[i + 1]);
        }
        loop(n) {
            write(v[i]);
        }
        end;
    }

    return 0;
}

/* "C_Cpp.clang_format_fallbackStyle": "Visual Studio"