#pragma once
//Menu class

//Co to jest enum?

// Enum to "typ wliczeniowy" sluzy do latwiejszego operowania nie na liczbach a na slowach

#ifndef MENU_H
#define MENU_H

#include<iostream>
#include<string>
#include<vector>       
#include<cstdlib>  //for exit 

using namespace std;

enum chooseMenu { polynomial = 1, matrix = 2, equation = 3, goexit = 4 };


class Menu
{
	
public:
	

	vector<string>choose;
	void getNumber();       //to get user choice 
	void showMenu();      //to show all menu options
 Menu(); 


};


//default constructor
	Menu::Menu()
	{
		
		vector<string>choose;


	
		choose.push_back(polynomial);  // i tu mi pokazuje b³¹d, chyba ze zmienia ze stringa na np int 
		choose.push_back(matrix);     // i tu te¿
		choose.push_back(equation);    // i tu 
		choose.push_back(goexit);         // o dziwo tu tez 
		

	//	int wybor;

	}

	void Menu::showMenu()
	{
		cout << "\t         MENU" << endl<<endl;
		cout << "\t You must choose, but choose wisely." << endl;
		cout << "\t 1 - \t polynomial"<<endl;
		cout << "\t 2 - \t matrix" << endl;
		cout << "\t 3 - \t equation" << endl;
		cout << "\t 4 - \t exit" << endl<<endl;

		getNumber();

	}


	
	void Menu::getNumber()
	{


		int chosen_number;
		cin >> chosen_number;

		switch (chosen_number)
		{
		case polynomial:
			cout << "You choose poly" << endl;
			//function of poly
			break;
		case matrix:
			cout << "You choose matrix" << endl;
			break;
			//function of matrix
		case equation:
			cout << "You choose equation" << endl;
			//function of equation
			break;

		case goexit:
			exit(1);

		default:
			cout << "O o o try again" << endl;
		}

	}

	
#endif