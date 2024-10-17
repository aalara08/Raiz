#include <bits/stdc++.h>
using namespace std;
int main() {
    int X, B, C;
    double D, x1, x2; // hice double para resultados decimales
    cout<<"soy tuyo, ALCALA LARA EDGAR";

    cin >> X >> B >> C; //lei las variables

    D = (B * B) - (4 * X * C);

    x1 = (-B + sqrt(D)) / (2 * X); //en estas 2 puse la formula para calcular la raiz
    x2 = (-B - sqrt(D)) / (2 * X);

    cout << x1 << " " << x2 << endl;

    return 0;
}
