#include <iostream>
#include <algorithm>
using namespace std;

double wartosc_funkcji_z4(double x) {
    if (x < 0) {
        return 6.0;
    }

    if (x > 1) {
        return 3.0;
    }

    return -3 * x + 6;
}
int main() {
    double parametrX;
    cout << "Podaj wartosc parametra x" << endl;
    cin >> parametrX;

    cout << wartosc_funkcji_z4(parametrX) << endl;
}
