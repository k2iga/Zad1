//Pierwszy program z tej ksi¹¿ki uzupelnij tak, by oprócz tekstu "Witamy na pok³adzie"
//pojawi³a siê na ekranie informacja o tym:
//1. Jak nazywa siê plik programu,
//2.W której jego linii nastapi³a instrukcja wypisuj¹ca
//3. Jaka by³a data kompilacji,
//4.Jaka byla godzina minuta itd tej kompilacji
//5.Czy u¿yto kompilatora c++

#include<iostream>
using namespace std;

int main()
{
	cout << "Witamy na pok³adzie " << endl;
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