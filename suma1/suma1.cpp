#include <bits/stdc++.h>
using namespace std;
int main() {
    int X, B, C;
    double D, x1, x2;

    cin >> X >> B >> C;

    D = (B * B) - (4 * X * C);

    x1 = (-B + sqrt(D)) / (2 * X);
    x2 = (-B - sqrt(D)) / (2 * X);

    cout << x1 << " " << x2 << endl;

    return 0;
}
