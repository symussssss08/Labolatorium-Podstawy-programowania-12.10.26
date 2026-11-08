// Labolatorium-Podstawy-programowania-12.10.26.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <ctime>

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


	
	
	
	// Zadanie 1 

for (int i = 0; i <= 10; i++)
{
	cout << i << endl; 
}
return 0; 

	

	// Zadanie 2
	
	int fahr, celsius; //zmienne typu int 
	int start, limit, krok; //zmienne typu int 

	start = 0; //przypisz 0 do start 
	limit = 200; //przypisz 200 do limit 
	krok = 20; //przypisz 20 do krok 

	fahr = start; //przypisz wartosc start do zmiennej fahr, czyli fahr = 0 
	while (fahr <= limit) { //wykonuj petle dopoki wartosc fahr jest <= od zmiennej limit 
		celsius = 5 * (fahr - 32) / 9; //oblicz stopnie C i przypisz wynik do celsius 
		cout << fahr << "\t" << celsius << endl; //wypisz zmienne na ekran
		fahr = fahr + krok; //zwieksz wartosc zmiennej fahr o wartosc zmiennej krok
	}

	

	// Zadanie 7

	int b; 
	for (int a = 0; a < 10; a++)
	{
		cout << "Podaj liczbe: "; 
		cin >> b; 
		if (b > 0)
		{
			cout << b << endl;
		}
	}

	

	// Zadanie 8 

	
	for (int a = 0; a <= 100; a++)
	{
		if (a % 2 == 0)
		{
			cout << a << endl; 
		}
		
	}
	

	// Zadanie 9 
	int n; 
	cout << "Wprowadz wartosc dla n: ";
	cin >> n; 
	for(int a = 0; a <= 100; a++)
		if (a % n == 0)
		{
			cout << a << endl;
		}
	
	// Zadanie 10 

	int n; 
	cout << "Wprowadz wartosc dla n: ";
	cin >> n; 
	if (n == 0)
	{
		cout << "Nie mozna dzielic przez 0" << endl; 
		return 0; 
	 
	}
	int ile_liczb = 0;

	for (int a = 0; a <= 100; a++)
	{
		if (a % n == 0)
		{
			ile_liczb++;
			
			cout << "Liczb podzielnych przez " << n << " jest " << ile_liczb << endl;
		}
		
	}

	

	// Zadanie 11 

	int a, b;
	cout << "Wprowadz wartosc dla pierwszej liczby: ";
	cin >> a; 
	cout << "Wprowadz wartosc dla drugiej liczby: ";
	cin >> b; 

	if (a > b)
	{
		cout << "Pierwsza liczba jest wieksza od drugiej, a ustanowiony przedzial liczbowy to [" << b << "," << a << "]" << endl; 
		for (int i = b; i <= a; i++)
		{
			if (i % 3 == 0)
			{
				cout << i << endl;
			}
		}
	}
	else
	{
		cout << "Druga liczba jest wieksza od pierwszej, a ustanowiony przedzial liczbowy to [" << a << "," << b << "]" << endl;
		for (int i = a; i <= b; i++)
		{
			if (i % 3 == 0)
			{
				cout << i << endl;
			}
		}
	}

	

	// Zadanie 12 
	

	int n; 
	cout << "Podaj ile liczb chcesz wprowadzic(n): "; 
	cin >> n; 

	if (n <= 0)
	{
		cout << "Liczba music byc wieksza od 0";
		return 0;
	}
	double suma = 0; 
	double liczba; 

	for (int i = 1; i <= n; i++)
	{
		cout << "Podaj " << i << " liczbe: ";
		cin >> liczba;
		suma += liczba; 
	}

	double srednia = suma / n; 
	cout << "Suma wprowadzonych liczb : " << suma << endl; 
	cout << "Srednia arytmetyczna wynosi " << srednia << endl; 
	
	

	// Zadanie 13

	for (int a = 100; a >= 0; a--)
	{
		cout << a << endl;
	}

	

	// Zadanie 14 
	
	int a, b, c; 
	cout << "Wprowadz liczbe a: ";
	cin >> a; 
	cout << "Wprowadz liczbe b: ";
	cin >> b; 
	cout << "Wprowadz liczbe c: ";
	cin >> c; 
	if (a > b && b < c)
	{
		cout << "Najmniejsza liczba jest licza b " << endl; 
	}
	else if (b > a && a < c)
	{
		cout << "najmniejsza liczba jest liczba a " << endl;
	}
	else
	{
		cout << "Najmniejsza liczba jest c " << endl; 
	}
	
	// Zadanie 15 


	srand(time(0));

	int n, m;
	cout << "Wprowadz wartosc liczby m: ";
	cin >> m;
	cout << "Twoim przedzialem jest [0;" << m << "]" << endl;
	cout << "Wprowadz wartosc liczby n: ";
	cin >> n;

	cout << "Wylosowane liczby to " << endl; 
	for (int i = 0; i < n; i++)
	{
		int wylosowana = rand() % (m + 1); 
		cout << wylosowana << " "; 
	}
	cout << endl; 

	return 0; 

	*/
	
	//Zadanie 16 
	
	srand(time(0));

	int n; 
	cout << "Podaj szczesliwy numerek[1-10]: ";
	cin >> n; 
	int ile_trafien = 0; 

	for (int i = 0; i < 10; i++)
	{
		int wylosowana = rand() % 10 + 1; 

		if (wylosowana == n)
		{
			ile_trafien++;
		}
	}
	cout << "Szczesliwy numerek pojawil sie " << ile_trafien << "razy." << endl; 

	







}