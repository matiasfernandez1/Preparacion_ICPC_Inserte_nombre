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
int v[100000];
int k;
void merge_(int l, int r) {
    if (r - l == 1 or k <= 1)
        return;
    else {
        int m = (l + r) / 2;
        k -= 2;
        swap(v[m - 1], v[m]);
        merge_(l, m);
        merge_(m, r);
    }
}

int main() {
    // OJ;
    FIO;
    int n;
    read(n, k);  //aaaaaaa
    if (k % 2 == 0 or k >= 2 * n) {
        write(-1);
        end;
    } else {
        loop(n) {
            v[i] = i + 1;
        }
        merge_(0, n);
        loop(n) write(v[i]);
        end;
    }

    return 0;
}