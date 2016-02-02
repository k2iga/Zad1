//Napisaæ funkcje w C++, która przyjmuje liczbê 
//i wypisuje na podstawie tej informacji dzien tygodnia

#include <iostream>
int main()
{
	using namespace std;
int i;
cout << "Podaj liczbe od 1 do 7 a podam Ci dzien tygodnia \n";
cin >> i;
switch (i)
{
case 1:
	cout << "Poniedzia³ek\n";
	break;

case 2:
	cout << "Wtorek\n";
	break;

case 3:
	cout << "Sroda\n";
	break;

case 4:
	cout << "Czwartek\n";
	break;

case 5:
	cout << "Piatek\n";
	break;

case 6:
	cout << "Sobota\n";
	break;

case 7:
	cout << "Niedziela\n";
	break;

default:
	cout << "Do tej liczby nie mam dnia tygodnia, podaj cyfre od 1 do 7";
	break;

}
cin.get();
return 0;
}