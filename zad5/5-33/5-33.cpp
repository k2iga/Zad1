//5.33 Napisz program, w kt�rym b�dzie funkcja void f();
//Funkcja main ma wywo�a� t� funkcj� 100 razy. Funkcja f ma wiedzie� ile razy
//zosta�a ju� wywo�ana i - przy co dwunastym wywo�aniu - wypisywac na ekranie stosowny tekst np. "nowy tuzin"

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
	cout << "Funkcja wywo�ana " << zliczenia << " raz " << endl;
	if (!(zliczenia % 12))
		cout << endl
		<< " Nowy tuzin - HURRA!!!" << endl << endl;


}