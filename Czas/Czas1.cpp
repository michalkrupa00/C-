#include <iostream>
#include <ctime>
using namespace std;
int main()
{
	srand(time(NULL));

	clock_t czas1 = clock(); // rozpoczecie liczenia czasu
	// miejsce na badane operacje
	clock_t czas2 = clock(); // zakonczenie liczenia czasu
	double wynik = (double)(czas2 - czas1) / CLOCKS_PER_SEC;  //obliczenie ile trwala operacja
	cout << wynik << endl; // wypisanie ile trwala operacja
	cout << "Stala systemowa CLOCKS_PER_SEC ma wartosc: " << CLOCKS_PER_SEC << endl;
}
