#include <iostream>
#include <cstdlib>
#include <ctime>
#include <ctime>


using namespace std;

clock_t czas1;
clock_t czas2;

int RandomArray(int tab[], int n) {
	srand(time(0));
	for (int i = 0; i < n; i++)
		tab[i] = rand() % 100;
	return 0;
}

int InsertSort(int tab[], int n) {
	int liczba_operacji = 0;
	int szukana;
	int licznik = 0;
	for (int i = 0; i < n; i++) {
		szukana = tab[i];
		liczba_operacji++;
		int j = i - 1;
		liczba_operacji++;
		while (j >= 0 && szukana < tab[j]) {
			tab[j + 1] = tab[j];
			liczba_operacji++;
			j--;
			liczba_operacji++;
		}tab[j + 1] = szukana;
		liczba_operacji++;
	}
	return liczba_operacji;
}

int main() {
	int zlozonosc;
	const int N1 = 10000;
	const int N2 = 20000;
	const int N3 = 30000;
	const int N4 = 40000;
	int tab1[N1];
	int tab2[N2];
	int tab3[N3];
	int tab4[N4];
	RandomArray(tab1, N1);
	czas1 = clock();
	zlozonosc = InsertSort(tab1, N1);
	czas2 = clock();
	cout << "Czas sortowania tablicy o wielkosci " << N1 << " :" << (double)(czas2 - czas1) / CLOCKS_PER_SEC << endl;
	cout << "C = " << ((double)zlozonosc / (double)(N1 * N1)) << endl;
	RandomArray(tab2, N2);
	czas1 = clock();
	zlozonosc = InsertSort(tab2, N2);
	czas2 = clock();
	cout << "Czas sortowania tablicy o wielkosci " << N2 << " :" << (double)(czas2 - czas1) / CLOCKS_PER_SEC << endl;
	cout << "C = " << ((double)zlozonosc / (double)(N2 * N2)) << endl;
	RandomArray(tab3, N3);
	czas1 = clock();
	zlozonosc = InsertSort(tab3, N3);
	czas2 = clock();
	cout << "Czas sortowania tablicy o wielkosci " << N3 << " :" << (double)(czas2 - czas1) / CLOCKS_PER_SEC << endl;
	cout << "C = " << ((double)zlozonosc / (double)(N3 * N3)) << endl;
	RandomArray(tab4, N4);
	czas1 = clock();
	zlozonosc = InsertSort(tab4, N4);
	czas2 = clock();
	cout << "Czas sortowania tablicy o wielkosci " << N4 << " :" << (double)(czas2 - czas1) / CLOCKS_PER_SEC << endl;
	cout << "C = " << ((double)zlozonosc / (double)(N4 * N4)) << endl;

	return 0;
}