#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;

#define INF (int)1e9
#define pb push_back
#define OJ                            \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
int movi[] = {1, -1, 0, 0};
int movj[] = {0, 0, -1, 1};

vector<vector<bool>> mat;
vector<vector<bool>> visited;
int comp = 0;
bool salida = false;
void dfs(int i, int j) {
    if (visited[i][j]) return;
    visited[i][j] = true;
    if (i == 0 || j == 0 || i == mat.size() - 1 || j == mat[i].size() - 1) salida = true;
    for (int h = 0; h < 4; h++) {
        int posi = movi[h] + i;
        int posj = movj[h] + j;
        if (0 <= posi && posi < mat.size() && 0 <= posj && posj < mat[i].size()) {
            if (mat[posi][posj]) {  //si es visitable lo visito
                dfs(posi, posj);
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //OJ;
    int n, m;
    cin >> n >> m;
    mat.assign(2 * (n + 1), vector<bool>(2 * (m + 1), true));
    visited.assign(2 * (n + 1), vector<bool>(2 * (m + 1), false));
    string linea;
    for (int i = 0; i < n; i++) {
        cin >> linea;
        for (int j = 0; j < linea.length(); j++) {
            if (linea[j] == '/') {
                mat[2 * i][2 * (j + 1)] = false;
                mat[2 * i + 1][2 * j + 1] = false;
                mat[2 * (i + 1)][2 * j] = false;
            }
            if (linea[j] == '\\') {
                mat[2 * i][2 * j] = false;
                mat[2 * (i + 1)][2 * (j + 1)] = false;
                mat[2 * i + 1][2 * j + 1] = false;
            }
        }
    }

    for (int i = 0; i < 2 * n + 1; i++) {
        for (int j = 0; j < 2 * m + 1; j++) {
            if (mat[i][j] && !visited[i][j]) {
                salida = false;
                dfs(i, j);
                if (!salida) {
                    comp++;
                    //printf("no sale en %d %d\n",i,j);
                }
            }
        }
    }
    cout << comp << endl;

    cerr << "\nTime elapsed: " << 1000 * clock() / CLOCKS_PER_SEC << "ms\n";
    return 0;
    //g++ -O2 [path] && time ./a.out < in > out
}