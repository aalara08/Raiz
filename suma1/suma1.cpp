#include <bits/stdc++.h> /// PRIMERO DECLARE LAS VARIABLES QUE VOY A OCUPAR LUEGO LAS HICE DOUBBLE PARA DECIMALES LUEGO LAS LEI Y DESPUES HICE EL PROCESO DE LA FORMULA PARA DESPUES CALCULAR LA RAIZ AL CUADRADO Y IMPRIMIR X1 y X2
using namespace std;
int main() {
    int X, B, C;
    double D, x1, x2;
    cout<<"soy tuyo, ALCALA LARA EDGAR";

    cin >> X >> B >> C;

    D = (B * B) - (4 * X * C);

    x1 = (-B + sqrt(D)) / (2 * X);
    x2 = (-B - sqrt(D)) / (2 * X);

    cout << x1 << " " << x2 << endl;

    return 0;
}
