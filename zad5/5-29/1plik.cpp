// 5.29 Napisz program sk�adaj�cy si� z funcji main i funkcji druga b�d�cych w dw�ch r�nych plikach.
//Nast�pnie napisz definicj� funkcji inline o nazwie "wieksza" , kt�ra przyjmuje dwa argumenty typu int, 
//a jako rezultat zwraca wiekszy z nich. Wywo�ania tej funkcji maj� by� zar�wno z funkcji main,
//jak i z funkcji druga.
//Zr�b to na dwa sposoby:
//1.u�ywaj�c pliku nag��wkowego w��czanego dyrektyw� #include,
//2. bez u�ycia pliku nag��wkowego

#include<iostream>
#include "Header.h"

using namespace std;


int main()
{
	druga();
	cout << wieksza(10000000, 70000) << endl;
	system("pause");

}

