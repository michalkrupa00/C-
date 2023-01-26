#include <iostream>
#include <algorithm>
using namespace std;

bool czy_mozna_zbudowac_trojkat(double boki[3]) {

    return boki[2] < (boki[0] + boki[1]);
}

double obwod_trojkata(double boki[3]) {
    return boki[0] + boki[1] + boki[2];
}

double pole_trojkata(double boki[3]) {

    double polowaObwodu = obwod_trojkata(boki) / 2;
    return (polowaObwodu * (polowaObwodu - boki[0]) * (polowaObwodu - boki[1]) * (polowaObwodu - boki[2]));
}

bool czy_trojkat_jest_rownoboczny(double boki[3]) {
    return boki[0] == boki[1] && boki[0] == boki[2];
}

bool czy_trojkat_jest_prostokatny(double boki[3]) {
    return (boki[0], 2) + (boki[1], 2) == (boki[2], 2);
}

int main() {
    double bokiTrojkata[3];
    cout << "Podaj boki trojkata" << endl;
    cin >> bokiTrojkata[0] >> bokiTrojkata[1] >> bokiTrojkata[2];

    sort(bokiTrojkata, bokiTrojkata + 3); // sort() domyslnie sortuje rosnaco

    if (czy_mozna_zbudowac_trojkat(bokiTrojkata)) {
        cout << "Trojkat mozna zbudowac" << endl;
        cout << "Obwod: " << obwod_trojkata(bokiTrojkata) << endl;
        cout << "Pole: " << pole_trojkata(bokiTrojkata) << endl;

        if (czy_trojkat_jest_rownoboczny(bokiTrojkata)) {
            cout << "Trojkat jest rownoboczny" << endl;
        }

        if (czy_trojkat_jest_prostokatny(bokiTrojkata)) {
            cout << "Trojkat jest prostokatny" << endl;
        }
    }
    else {
        cout << "Trojkata NIE mozna zbudowac" << endl;
    }
}
