#include <iostream>
#include <ctime>
#include <math.h>
using namespace std;
int main()
{
	int LIter = 53113e4;
	int k = 0;
	int x = 0;
	srand(time(NULL));
	clock_t czas1 = clock(); // rozpoczecie liczenia czasu
	for (int i = 0; i < LIter; i++) {
		k = i + i;
	}
	clock_t czas2 = clock(); // zakonczenie liczenia czasu
	double wynik = (double)(czas2 - czas1) / CLOCKS_PER_SEC;  //obliczenie ile trwala operacja
	cout << "czas dzialania k = i + i to: " << wynik << endl; // wypisanie ile trwala operacja

	czas1 = clock(); // rozpoczecie liczenia czasu
	for (int i = 0; i < LIter; i++) {
		k = 2 * i;
	}
	czas2 = clock(); // zakonczenie liczenia czasu
	wynik = (double)(czas2 - czas1) / CLOCKS_PER_SEC;  //obliczenie ile trwala operacja
	cout << "czas dzialania k = 2*i to: " << wynik << endl; // wypisanie ile trwala operacja
	cout << endl;
	czas1 = clock(); // rozpoczecie liczenia czasu
	for (int i = 0; i < LIter; i++) {
		x = x / 4;
	}
	czas2 = clock(); // zakonczenie liczenia czasu
	wynik = (double)(czas2 - czas1) / CLOCKS_PER_SEC;  //obliczenie ile trwala operacja
	cout << "czas dzialania x = x/4; to: " << wynik << endl; // wypisanie ile trwala operacja

	czas1 = clock(); // rozpoczecie liczenia czasu
	for (int i = 0; i < LIter; i++) {
		x = x * (0, 25);
	}
	czas2 = clock(); // zakonczenie liczenia czasu
	wynik = (double)(czas2 - czas1) / CLOCKS_PER_SEC;  //obliczenie ile trwala operacja
	cout << "czas dzialania x = x *(0,25) to: " << wynik << endl; // wypisanie ile trwala operacja

	cout << endl;
	czas1 = clock(); // rozpoczecie liczenia czasu
	for (int i = 0; i < LIter; i++) {
		k = k + 1;
	}
	czas2 = clock(); // zakonczenie liczenia czasu
	wynik = (double)(czas2 - czas1) / CLOCKS_PER_SEC;  //obliczenie ile trwala operacja
	cout << "czas dzialania k = k+1 to: " << wynik << endl; // wypisanie ile trwala operacja

	czas1 = clock(); // rozpoczecie liczenia czasu
	for (int i = 0; i < LIter; i++) {
		k++;
	}
	czas2 = clock(); // zakonczenie liczenia czasu
	wynik = (double)(czas2 - czas1) / CLOCKS_PER_SEC;  //obliczenie ile trwala operacja
	cout << "czas dzialania k++ to: " << wynik << endl; // wypisanie ile trwala operacja

	cout << endl;
	czas1 = clock(); // rozpoczecie liczenia czasu
	for (int i = 0; i < LIter; i++) {
		x += i;
	}
	czas2 = clock(); // zakonczenie liczenia czasu
	wynik = (double)(czas2 - czas1) / CLOCKS_PER_SEC;  //obliczenie ile trwala operacja
	cout << "czas dzialania x += i to: " << wynik << endl; // wypisanie ile trwala operacja

	czas1 = clock(); // rozpoczecie liczenia czasu
	for (int i = 0; i < LIter; i++) {
		x = x + i;
	}
	czas2 = clock(); // zakonczenie liczenia czasu
	wynik = (double)(czas2 - czas1) / CLOCKS_PER_SEC;  //obliczenie ile trwala operacja
	cout << "czas dzialania x = x + i to: " << wynik << endl; // wypisanie ile trwala operacja

	cout << endl;
	czas1 = clock(); // rozpoczecie liczenia czasu
	for (int i = 0; i < LIter; i++) {
		k = 0;
	}
	czas2 = clock(); // zakonczenie liczenia czasu
	wynik = (double)(czas2 - czas1) / CLOCKS_PER_SEC;  //obliczenie ile trwala operacja
	cout << "czas dzialania k = 0 to: " << wynik << endl; // wypisanie ile trwala operacja

	czas1 = clock(); // rozpoczecie liczenia czasu
	for (int i = 0; i < LIter; i++) {
		k = k * 0;
	}
	czas2 = clock(); // zakonczenie liczenia czasu
	wynik = (double)(czas2 - czas1) / CLOCKS_PER_SEC;  //obliczenie ile trwala operacja
	cout << "czas dzialania k = k*0 to: " << wynik << endl; // wypisanie ile trwala operacja
}
