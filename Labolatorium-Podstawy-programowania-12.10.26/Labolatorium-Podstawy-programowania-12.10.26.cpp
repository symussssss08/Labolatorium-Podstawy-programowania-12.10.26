// Labolatorium-Podstawy-programowania-12.10.26.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>

using namespace std;

int main()
{
	/*

		// zadanie 1

		for (int u = 5; u > 7; u++)
			cout << u << endl << endl;

		for (int z = 5; z >= 7; z++)
			cout << z << endl << endl;

		for (int i = 10; i >= 0; i--)
			cout << i << endl;

		// zadanie 2

		int fahr, celsius;
		int start, limit, krok;
		start = 0;
		limit = 200;
		krok = 20;

		fahr = start;
		while (fahr <= limit)
		{
			celsius = 5 * (fahr - 32) / 9;
			cout << fahr << "\t" << celsius << endl;
			fahr = fahr + krok;
		}

		// zadanie 3

		int fahr, celsius;
		int start, limit, krok;

		start = 0;
		limit = 200;
		krok = 20;
		for(fahr = 0.0; fahr <= limit; fahr = fahr + krok)
		{
			celsius = (5.0 / 9.0) * (fahr - 32);
			cout << fahr << "\t" << celsius << endl;
		}

		// zadanie 5

		int fahr, celsius;
		int start, limit, krok;

		start = 0;
		limit = 0;
		cout << "Podaj limit: ";
		cin >> limit;

		krok = 0;
		cout << "Podaj wartosc dla kroku: " ;
		cin >> krok;
		for(fahr = 0.0; fahr <= limit; fahr = fahr + krok)
		{
			float celsius = (5.0 / 9.0) * (fahr - 32);
			cout << fahr << "\t" << celsius << endl;
		}

		// zadanie 6

		int a = 0;
		int j = 1;
		while (j <= 10)
		{
			cout << "Podaj wartosc: ";
			cin >> a;

			j++;

		// zadanie 7

		for(int i = 0; i < 10; i++)
		{
			int liczba;
			cout << " Podaj liczbe: " ;
			cin >> liczba;

			if (liczba > 0)
			{
				cout << " Dodatnia: " << liczba << endl;
			}
		}

		// Zadanie 8
		for (int i = 0; i <= 100; i++)
		{
			if (i % 2 == 0)
			{
				cout << "Liczba: " << i << endl;

			}
		}

		// Zadanie 9

		int n;
		cout << " Podaj wartosc n z przedzialu [1, 100]: ";
		cin >> n;

		for(int i = 0; i <= 100; i++)

		{
			if (i % n == 0)
			{
				cout <<" liczba podzielna przez wybrane n: " <<i << endl;
			}

		}

		// Zadanie 10

		int n;
		cout << " Podaj wartosc n :";
		cin >> n;

		int licznik = 0;
		for (int i = 0; i <= 100; i++)
		{
			if (i % n == 0)
			{
				licznik++;
			}
		}
		cout << " Ilosc liczb podzielnych przez n wynosi: " << licznik << endl;



		// Powtórka


		char znak = 'b';
		int liczba = 3; int inna = 7;
		if (znak == 'a' || znak == 'b') {
			cout << "instrukcja wykona sie jesli znak = a lub jesli znak = b" << endl;
		}
		if (znak == 'b' && liczba == 13)
		cout << "instrukcja wykona sie jesli znak = b i jesli liczba = 13" << endl;

		if (znak != 'A')
		cout << "instrukcja wykona sie jesli znak bedzie rozny od wielkiej litery A" << endl;

		if (znak == 'a' || (liczba == 3 && inna == 7)) {
			cout << "TRUE" << endl;
			//jesli znak = a lub jesli liczba = 3 i inna liczba = 7 to wyswietli sie: "TRUE"
		}
		else {
			cout << "NOT TRUE" << endl;
		}



		for (int i = 0; i < 10; i++)
		{
			if (i == 5)
				continue;
			cout << " Iteracja nr " << i << endl;
		}





		int i = 0;
		while (i < 10)
		{
			for (int j = 0; j < 10; j++)
			{
				cout << "i = " << i << ", j = " << j << endl;
				if (j >= 1)
					break;
			}
			i++;
		}



		while (1337)
		{
			cout << "Zakonczyc petle? Jesli tak, wpisz 1 \n";
			int kod;
			cin >> kod;
			if (kod == 1)
				break;

		}


	int liczba;

	cout << "Podaj liczbe: ";
	cin >> liczba;

	cout << "START" << endl;

	if (liczba > 0) {
		cout << "Liczba jest dodatnia" << endl;

		if (liczba % 2 == 0) {
			cout << "Liczba jest parzysta" << endl;
		}
		else {
			cout << "Liczba jest nieparzysta" << endl;
		}
	}
	else if (liczba < 0) {
		cout << "Liczba jest ujemna" << endl;
	}
	else {
		cout << "Liczba jest rowna zero" << endl;
	}

	cout << "KONIEC" << endl;



	float = 0.0;
	while (i != 5.0)
	{
		cout << "Wartosc i = " << endl;
		i = i + 0.05;

	}
	*/











}