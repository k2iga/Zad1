//2.Posługując się operatorem modulo napisz program , który wypisywał
//będzie na ekranie kolejne liczby całkowite począwszy od 1 do 100 , a
//po zakończeniu każdej dziesiątki wypisze tekst „zakończona dziesiątka”

#include<iostream>
using namespace std;

int main()
{
for(int i=1; i<=100; i++)
	{
	cout<<i<<" ";
	if(!(i%10))
			cout<<"Zakonczona dziesiatka \n";

	}

}

