#include <iostream>
#include <algorithm>
using namespace std;

double wartosc_funkcji_z3(double x) {
    return 2 * x * x - 1;
}

int main() {
    double parametrX;
    cout << "Podaj wartosc parametra x" << endl;
    cin >> parametrX;

    cout << wartosc_funkcji_z3(parametrX) << endl;
}
