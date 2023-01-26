#include <iostream>
#include <algorithm>
using namespace std;

double waluty(double liczbaZlotych, char symbolWaluty) {
    switch (symbolWaluty) {
    case 'E':
        return liczbaZlotych / 4.48;
    case 'F':
        return liczbaZlotych / 4.14;
    case '$':
        return liczbaZlotych / 3.75;
    default:
        cout << "Podany symbol waluty jest nieprawdilowy" << endl;
        return 0.0;
    }
}
int main() {
    double liczbaZlotych;
    char symbolWaluty;

    cout << "Podaj liczbe zlotych" << endl;
    cin >> liczbaZlotych;
    cout << "Podaj symbol waluty" << endl;
    cin >> symbolWaluty;

    cout << waluty(liczbaZlotych, symbolWaluty) << endl;
}
