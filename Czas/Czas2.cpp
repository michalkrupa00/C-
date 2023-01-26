#include <iostream>
#include <ctime>
using namespace std;
int main()
{
	int LIter = 33113e4;
	srand(time(NULL));
	clock_t czas1 = clock(); // rozpoczecie liczenia czasu
	for (int i = 0; i < LIter; i++) {
		continue; //tu bêdziemy wstawiaæ ró¿ne instrukcje
	}
	clock_t czas2 = clock(); // zakonczenie liczenia czasu
	double wynik = (double)(czas2 - czas1) / CLOCKS_PER_SEC;  //obliczenie ile trwala operacja
	cout << "Czas wykonania instrukcji to: " << wynik << endl << "Wartosc zmiennej LIter to: " << LIter << endl; // wypisanie ile trwala operacja
}
