//2. Podac ciag jaki zostanie wypisany dla ponizszego kodu :
//```
//int n = 0;
//while (n<10) {
//	n++;
//	if (n % 2)
//		continue;
//	std::cout << n << std::endl;


 // Sprawdzenie dzialania kodu bez instrukcji "continue"
//#include <iostream>
//int main()
//{
//	using namespace std;
//
//	int n = 0;
//	while (n < 10)
//	{
//		n++;  // zastepuje n=n+1
//		if (n % 2)  //operator modulo, oblicza reszt� z dzielenia 
//
//      	cout << n << endl; // je�li reszta z dzielenia jest niezerowa [prawda] to j� wy�wietla 
//	}
//
//	cin.get();
//}

//program wypisuje liczby 1 3 5 7 9



// Sprawdzenie dzia�ania kodu z instrukcj� "continue"
#include <iostream>
int main()
{
	using namespace std;
	int n = 0;
	while (n < 10)
	{
		n++;  // zastepuje n=n+1
		if (n % 2)  //operator modulo, podaje reszt� z dzielenia 
			continue;     // tym razem jesli reszta jest niezerowa [prawda] to nie s� realizowane kolejne polecenia 
						  // za to wykonywany jest kolejny obieg p�tli


		cout << n << endl; // zostanie wykonane tylko gdy warunek b�dzie fa�szywy czyli dla zerowej reszty z dzielenia
	}
	cin.get();
}

// wyswietla 2 4 6 8 10

