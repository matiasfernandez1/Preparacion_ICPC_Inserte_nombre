#include <bits/stdc++.h>

using namespace std;

#define loop(h) for (int i = 0; i < h; i++)
template <typename... T>
void read(T&... args) {
    ((cin >> args), ...);
}

template <typename... T>
void write(T&&... args) {
    ((cout << args << " "), ...);
}
int total = 37;
int Dias_pasados = 26;
int dias_quedan = 18;
string v[18] = {
    "1 junio",
    "2 junio",
    "3 junio",
    "8 junio",
    "9 junio",
    "10 junio",
    "15 junio",
    "16 junio",
    "17 junio",
    "22 junio",
    "23 junio",
    "24 junio",
    "29 junio",
    "30 junio",
    "1 julio",
    "6 julio",
    "7 julio",
    "8 julio"};
}
int main() {
    loop(dias_quedan) {
        int x = 40 * (dias_quedan + Dias_pasados) / (26 + i);
        write("Para el día", v[i], "necesitas un mínimo de :", x, "para saltar taller.\n");
    }
    return 0;
}