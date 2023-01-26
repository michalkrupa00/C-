#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    double pierwszaLiczba;
    double drugaLiczba;
    char znak;

    cout << "Podaj liczby" << endl;
    cin >> pierwszaLiczba >> drugaLiczba;
    cout << "Podaj znak" << endl;
    cin >> znak;

    switch (znak) {
    case '+':
        cout << pierwszaLiczba << " + " << drugaLiczba << " = " << pierwszaLiczba + drugaLiczba << endl;
        break;
    case '-':

        if (pierwszaLiczba < drugaLiczba) {
            cout << drugaLiczba << " - " << pierwszaLiczba << " = " << drugaLiczba - pierwszaLiczba
                << endl;
        }
        else {
            cout << pierwszaLiczba << " - " << drugaLiczba << " = " << pierwszaLiczba - drugaLiczba
                << endl;
        }
        break;
    case '*':
        cout << pierwszaLiczba << " * " << drugaLiczba << " = " << pierwszaLiczba * drugaLiczba << endl;
        break;
    case '/':
        if (drugaLiczba != 0) {
            cout << pierwszaLiczba << " / " << drugaLiczba << " = " << pierwszaLiczba / drugaLiczba
                << endl;
        }
        else {
            cout << "Blad przy dzieleniu: - druga liczba jest zerem" << endl;
        }
        break;
    default:
        cout << "Podales nieprawidlowy znak" << endl;
    }
}
