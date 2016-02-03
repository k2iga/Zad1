//Napisac kod, ktory dla ciagu liczb od 1 do 100 wypisze:
//"liczba_ciagu Three", gdy liczba jest podzielna przez 3
//"liczba_ciagu Five", gdy liczba jest podzielna przez 5
//"liczba_ciagu ThreeFive" gdy jest podzielna przez 3 i 5 jednoczesnie.
//liczba_ciagu oznacza aktualnie badana liczbe!!!

//do tego trzeba wykorzystaæ operator modulo

#include <iostream>
using namespace std;

int main()
{


	for (int i = 1; i <= 100; i++)
	{

		cout << i << "  ";

		if (i % 3 == 0)
			cout << "Three";

		if (i % 5 == 0)
			cout << "Five";

		cout << endl;

	}

	cin.get();
	return 0;

}

























