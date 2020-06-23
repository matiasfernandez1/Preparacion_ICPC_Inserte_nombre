#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;

int f(int a, int b) {
    int a_1 = a;
}
int main() {
    int n, k;
    cin >> n >> k;
    bool v[k + 1];

    int x = 0, c = 0, w[k + 1];
    int aux;
    for (int i = 0; i < n; i++) {
        cin >> aux;
        if (v[aux] == false) {
            x *= 10;
            x += aux;
            c++;
            w[aux] = c;
        } else {
            x = f(aux, x);
        }
    }
    return 0;
}