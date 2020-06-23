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
        int n, k, c = 0, sol = 0, len = 0;
        string s;
        read(n, k, s);
        vector<int> ceros;
        rep(j, n) {
            if (s[j] == '0')
                c++;
            else {
                ceros.push_back(c);
                len++;
                c = 0;
            }
        }
        ceros.push_back(c);
        int m = 0;
        len++;
        if (len == 1 and ceros[0] == 0) {
            write(0);
            end;
            continue;
        }

        if (len == 1 and ceros[0] != 0) {
            sol = ceros[0] / (k + 1);
            if (ceros[0] % (k + 1) != 0) sol++;
            write(sol);
            end;
            continue;
        }

        for (auto x : ceros) {
            if (m == 0) {
                sol += (x - k) / (k + 1);
                if ((x - k) % (k + 1) != 0 and (x - k) > 0) sol++;
            }
            if (m == len - 1) {
                sol += (x - k) / (k + 1);
                if ((x - k) % (k + 1) != 0 and (x - k) > 0) sol++;
            }
            if (m != 0 and m != len - 1 and (x - k) > 0) {
                sol += (x - 2 * k) / (k + 1);
                if ((x - 2 * k) % (k + 1) != 0 and (x - k * 2) > 0) sol++;
            }

            //write(x);
            m++;
        }

        write(sol);
        end;
    }
    return 0;
}