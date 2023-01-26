#include <iostream>
#include <ctime>
#include <math.h>
using namespace std;
int fib(int k) {
	if (k < 3) return 1;
	else
		return fib(k - 1) + fib(k - 2);
}
int main()
{
	int LIter = 53113e4;
	int k = 0;
	int x = 0;
	srand(time(NULL));
	clock_t czas1;
	clock_t czas2;
	double wynik;
	int czas[5];
	int wartosc[5];
	for (int i = 39; i < 44; i++)
	{
		czas1 = clock(); // rozpoczecie liczenia czasu

		wartosc[i - 39] = fib(i);

		czas2 = clock();
		wynik = (double)(czas2 - czas1) / CLOCKS_PER_SEC;
		czas[i - 39] = wynik;
	}
	cout << "czasy" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << i + 39 << " = " << czas[i] << endl;
	}
	cout << endl << "wartosci" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << i + 39 << " = " << wartosc[i] << endl;
	}
	cout << endl;
	cout << "stosunki wartosci wyrazow: " << endl;
	for (int i = 1; i < 5; i++)
	{
		cout << 39 + i << " oraz " << 38 + i << ": " << ((double)wartosc[i] / (double)wartosc[i - 1]) << endl;
	}
	cout << endl;
	cout << "stosunki czasow wyrazow: " << endl;
	for (int i = 1; i < 5; i++)
	{
		cout << 39 + i << " oraz " << 38 + i << ": " << ((double)czas[i] / (double)(czas[i - 1])) << endl;
	}
}