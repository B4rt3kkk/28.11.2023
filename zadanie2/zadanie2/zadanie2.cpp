#include <iostream>
#include <time.h>
using namespace std;

int main()
{
	srand(time(NULL));
	clock_t start, stop;


	start = clock();

	cout << "Dynamiczne przydzielanie pamieci dla tablicy - WSKAZNIK" << endl;
	int rozmiarTablicy;
	int los;
	cout << "Podaj romzmiar tablicy = "; cin >> rozmiarTablicy;
	int* tablica;
	tablica = new int[rozmiarTablicy];

	for (int i = 0; i < rozmiarTablicy; i++) 
	{
		los = rand() % 100 + 1;
		tablica[i] = los;
	}
	for (int i = 0; i < rozmiarTablicy; i++) 
	{
		cout << "Index nr " << i << " = " << tablica[i] << "Adres komurki: " << (int)&tablica[i] << endl;
	}

	stop = clock();

	double czasWyswietlaniaAplikacji = (double)(stop - start) / CLOCKS_PER_SEC;

	cout << "czas wyswietlania: " << czasWyswietlaniaAplikacji << endl;

	delete[] tablica;	

	return EXIT_SUCCESS;
}

