//Pierwszy program z tej ksi��ki uzupelnij tak, by opr�cz tekstu "Witamy na pok�adzie"
//pojawi�a si� na ekranie informacja o tym:
//1. Jak nazywa si� plik programu,
//2.W kt�rej jego linii nastapi�a instrukcja wypisuj�ca
//3. Jaka by�a data kompilacji,
//4.Jaka byla godzina minuta itd tej kompilacji
//5.Czy u�yto kompilatora c++

#include<iostream>
using namespace std;

int main()
{
	cout << "Witamy na pok�adzie " << endl;
	cout << "1. Tak nazywa sie plik programu, " << __FILE__ << endl
		<< " 2. W tej  linii nastapila instrukcja wypisujaca " << __LINE__ << endl
		<< " 3. Data kompilacji  " << __DATE__ << endl
		<< " 4. Godzina minuta itd tej kompilacji  " << __TIME__ << endl;


#ifdef __cplusplus 

		cout << "Uzyto  kompilatora C++" << endl;
#else 
	cout << "Inny kompilator" << endl
#endif
	
	system("pause");

}