#include<iostream>
#include <algorithm>
#include <cstdlib>
#include <windows.h>
using namespace std;
struct edge {            //pomocnicza struktura danych do przechowywania listy krawêdzi
    int s;              //wêze³ pocz¹tkowy krawêdzi (s,t)
    int t;              //wêze³ koñcowy krawêdzi (s,t)
};
void macierz(int n2, int m, edge edges[]) {
    double** adjMatrix;
    int n;                       //liczba wêz³ów
    n = n2;
    adjMatrix = new double* [n];
    for (int i = 0; i <= n; i++)
    {
        adjMatrix[i] = new double[n];
        for (int j = 0; j < n; j++)
        {
            adjMatrix[i][j] = 0;
        }
    }
    for (int i = 0; i < m; i++)
    {
        adjMatrix[edges[i].s][edges[i].t] = 1;
    }
    for (int i = 0; i < m; i++)
    {

        adjMatrix[edges[i].s][edges[i].t] = 1;
        adjMatrix[edges[i].t][edges[i].s] = 1;
    }

    cout << endl;
    cout << " ";
    for (int i = 0; i < n; i++)
    {
        cout << "   ";
        cout << i;
    }
    cout << endl;
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << i;
        cout << "   ";
        for (int j = 0; j < n; j++)
        {
            cout << adjMatrix[i][j];
            cout << "   ";
        }
        cout << endl;
        cout << endl;
    }

    int empty = 0;
    for (int i = 0; i < n; i++)
    {
        empty = 0;
        for (int j = 0; j < n; j++)
        {
            if (adjMatrix[i][j] > 0)empty++;
        }
        if (empty) cout << "sasiedzi  " << i << ":  ";
        for (int j = 0; j < n; j++)
        {
            if (adjMatrix[i][j] > 0)cout << j << ", ";
        }
        cout << endl;

    }
    cout << "   ";

   
    //wyœwietla graf w postaci "listy s¹siedztwa" (z wagami dla grafów wa¿onych)

}
int main() {
    int n, m;
    edge Graph[6] = { {0,1}, {1,2}, {2,3}, {3,0}, {0,4},{4,2} };
    n = 5; m = 6;
    macierz(n, m, Graph);
}