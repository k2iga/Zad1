// 5.29 Napisz program sk�adaj�cy si� z funcji main i funkcji druga b�d�cych w dw�ch r�nych plikach.
//Nast�pnie napisz definicj� funkcji inline o nazwie "wieksza" , kt�ra przyjmuje dwa argumenty typu int, 
//a jako rezultat zwraca wiekszy z nich. Wywo�ania tej funkcji maj� by� by� zar�wno z funkcji main,
//jak i z funkcji druga.
//Zr�b to na dwa sposoby:
//1.u�ywaj�c pliku nag��wkowego w��czanego dyrektyw� #include,
//2. bez u�ycia pliku nag��wkowego

#include<iostream>

using namespace std;
#include "Header.h"

void druga(void)
{
	cout << wieksza(3, 47) << endl;
}