#pragma once
#include <iostream>
using namespace std;
struct computer
{
	char name[100] = "";
	float frequence = 0;
	int ram = 0;
	bool dvd = false;
	float price = 0;

	void showinfo() {
		cout << "Name : " << name << endl;
		cout << "Frequence :" << frequence << endl;
		cout << "Ram :" << ram<< endl;
		cout << "dvd :" << (dvd?"yes":"no") << endl;
		cout << "Price" << price << " UAH" << endl;
	}
};