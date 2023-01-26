#include <iostream>
#include <algorithm>

using namespace std;


void szlaczek(int n, char z)
{
    for (int i = 0; i < n; i++)
    {
        cout << z;
    }
    cout << endl;
}


int main() {
    int liczbaZnakow;
    char znak;
    cout << "Szlaczek: podaj liczbe znakow" << endl;
    cin >> liczbaZnakow;
    cout << "Szlaczek: podaj znak" << endl;
    cin >> znak;

    szlaczek(liczbaZnakow, znak);
}
