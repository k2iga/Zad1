//Napisac kod, ktory dla ciagu liczb od 1 do 100 wypisze:
//"liczba_ciagu Three", gdy liczba jest podzielna przez 3
//"liczba_ciagu Five", gdy liczba jest podzielna przez 5
//"liczba_ciagu ThreeFive" gdy jest podzielna przez 3 i 5 jednoczesnie.
//liczba_ciagu oznacza aktualnie badana liczbe.

//do tego trzeba wykorzystaæ operator modulo

#include <iostream>
int main()
{
	using namespace std;

	int i;

	for (i = 1; i <= 100; i = i + 1)
	{
		if (i % 3 == 0 && i % 5 == 0)
			cout << "liczba_ciagu ThreeFive \n";
		if (i % 3 == 0)
			cout << "liczba_ciagu Three \n";

		if (i % 5 == 0)
			cout << "liczba_ciagu Five \n";

		else
			cout << i << "\n";
	}

	cin.get();


}