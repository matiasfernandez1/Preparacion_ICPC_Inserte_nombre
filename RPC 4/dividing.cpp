#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int sum = 0;

    while (n > m) {
        if (n % 2 == 1) {
            n = n + 1;
            sum++;
        } else {
            n = n / 2;
            sum++;
        }
    }

    sum = sum + (m - n);

    cout << sum << endl;

    return 0;
}
