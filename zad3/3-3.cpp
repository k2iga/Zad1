//Napisaæ funkcjê! w C++ która przyjmie liczbê i wypisuje na tej podsatwie dzieñ tygodnia

//sygnatura funkcji:
//std::string convertNumberToDay(int day); ` musisz zaimportowac `#include <string>`(edited)

//przyjmowac int'a zwracaæ string'a
//
#include<iostream>
#include<string>

using namespace std;
std::string convertNumberToDay(int day);

int main()
{
	
	int g;
	cout << "Podaj cyfre od 1 do 7 a podam Ci dzien tygodnia ";
	cin >> g;
	cout << convertNumberToDay(g);
	cin.get();

}


std::string convertNumberToDay(int day)
{
	if (day == 1)
		return "poniedzialek";
	if (day == 2)
		return "wtorek";
	if (day == 3)
		return "sroda";
	if (day == 4)
		return "czwartek";
	if (day == 5)
		return "piatek";
	if (day == 6)
		return "sobota";
	if (day == 7)
		return "niedziela";

	return "to nie byla cyfra od 1 do 7";
}


