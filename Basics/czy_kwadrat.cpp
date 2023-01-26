#include<iostream>

using namespace std;

bool czy_kwadrat(int bokA, int bokB) {
    if (bokA == bokB) {
        return true;
    }

    return false;
}

int pole(int bok) {
    return bok * bok;
}

int obwod(int bok) {
    return 4 * bok;
}

int main() {

    int bokA, bokB;
    cout << "Wpisz pierwszy a nastepnie drugi bok: " << endl;
    cin >> bokA >> bokB;

    if (czy_kwadrat(bokA, bokB)) {
        cout << "To jest kwadrat" << endl;
        cout << "Obwod: " << obwod(bokA) << endl;
        cout << "Pole: " << pole(bokA) << endl;
    }
    else {
        cout << "To NIE jest kwadrat" << endl;
    }
}