// lesson18-task1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "computer.h"
int main()
{
	int N = 5;
	computer* arr = new computer[N]
	{
		{"HP",1.2,6,false,20'000},
		{"Acer",3.2,8,true,15'000},
		{"Asus",2.4,16,false,45'000},
		{"Dell",2.2,8,false,17'000},
		{"Apple",3.2,32,false,78'000}
	};
	for (int i = 0; i < N; i++)
	{
		arr[i].showinfo();
	}
}
