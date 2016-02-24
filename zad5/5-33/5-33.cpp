//5.33 Napisz program, w którym bêdzie funkcja void f();
//Funkcja main ma wywo³aæ tê funkcjê 100 razy. Funkcja f ma wiedzieæ ile razy
//zosta³a ju¿ wywo³ana i - przy co dwunastym wywo³aniu - wypisywac na ekranie stosowny tekst np. "nowy tuzin"

#include <iostream>
using namespace std;
void f();

int main()
{
	for (int n = 0; n < 100; n++)
	{
		f();
	}
	system("pause");
}
void f()
{
	static int zliczenia;
	zliczenia++;
	cout << "Funkcja wywo³ana " << zliczenia << " raz " << endl;
	if (!(zliczenia % 12))
		cout << endl
		<< " Nowy tuzin - HURRA!!!" << endl << endl;


}