// 5.29 Napisz program sk³adaj¹cy siê z funcji main i funkcji druga bêd¹cych w dwóch ró¿nych plikach.
//Nastêpnie napisz definicjê funkcji inline o nazwie "wieksza" , która przyjmuje dwa argumenty typu int, 
//a jako rezultat zwraca wiekszy z nich. Wywo³ania tej funkcji maj¹ byæ zarówno z funkcji main,
//jak i z funkcji druga.
//Zrób to na dwa sposoby:
//1.u¿ywaj¹c pliku nag³ówkowego w³¹czanego dyrektyw¹ #include,
//2. bez u¿ycia pliku nag³ówkowego

#include<iostream>
#include "Header.h"

using namespace std;


int main()
{
	druga();
	cout << wieksza(10000000, 70000) << endl;
	system("pause");

}

