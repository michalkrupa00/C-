#include <iostream>
using namespace std;

string nazwaTrzech(long long x) {
    string jednosci[10] = { "zero","jeden ","dwa ","trzy ","cztery ","piec ","szesc ","siedem ","osiem ","dziewiec " };
    string nastki[11] = { "","dziesiec ","jedenascie ","dwanascie ","trzynascie ","czternascie ","pietnascie ","szesnascie ","siedemnascie ", "osiemnascie ","dziewietnascie " };
    string dziesiatki[10] = { "","dziesiec ","dwadziescia ","trzydziesci ","czterdziesci ","piecdziesiat ","szescdziesiat ","siedemndziesiat ", "osiemdziesiat ","dziewiecdziesiat " };
    string setki[10] = { "","sto ","dwiescie ","trzysta ","czterysta ","piecset ","szescset ","siedemset ","osiemset ","dziewiecset " };
    int liczba = x, koncowka;
    string slownie = "";

    for (int i = 0; liczba > 0; i++)
    {
        koncowka = liczba % 10;
        liczba = liczba / 10;

        if (i == 0 && (liczba % 10 != 1))
        {
            slownie = jednosci[koncowka] + slownie;
        }

        if (i == 0 && (liczba % 10 == 1))
        {
            slownie = nastki[koncowka + 1] + slownie;
            liczba = liczba / 10;
        }

        if (i == 1)
        {
            slownie = dziesiatki[koncowka] + slownie;
        }

        if (i == 2)
        {
            slownie = setki[koncowka] + slownie;
        }
    }

    return slownie;
}

void wypiszSlownie(long long x) {
    if (x >= 0 && x <= 999999999999) {
        int dlugosc = 0;
        long long liczba[4];
        long long pomoc = x;
        long long pomoc2 = x;
        string cala = "";
        for (int i = 1; pomoc >= 1; i++)
        {
            pomoc = pomoc / 10;
            dlugosc = i;
        }
        for (int i = 0; pomoc2 >= 1; i++)
        {
            liczba[i] = pomoc2 % 1000;
            pomoc2 = pomoc2 / 1000;
        }
        for (int i = 3; i >= 0; i--)
        {

            if (i == 0)
            {
                cala = cala + nazwaTrzech(liczba[0]);

            }
            else if (i == 1 && dlugosc > 3)
            {
                cala = cala + nazwaTrzech(liczba[1]) + " tys. ";

            }
            else if (i == 2 && dlugosc > 6)
            {
                cala = cala + nazwaTrzech(liczba[2]) + " mln. ";

            }
            else if (i == 3 && dlugosc > 9)
            {
                cala = cala + nazwaTrzech(liczba[3]) + " mld. ";

            }
        }
        cout << cala;
    }
    else if (x < 0) {
        cout << "Podano za mala liczbe!";
    }
    else if (x > 999999999999)
    {
        cout << "Podano za duza liczbe!";
    }
}
int main()
{
    wypiszSlownie(123333444555);
}
