

#include "pch.h"
#include <iostream>
#include <string>
#include <stdio.h>
#include <locale.h>

using namespace std;

bool chk(string str)
{
	int count = 0;
	for (int i = 0; i < str.length(); i++)
	{
		if ((int(str[i]) > 64) && (int(str[i]) < 122))
		{
			count++;
		}
	}
	if (count == str.length())
	{
		return true;
	}
	else
	{
		return false;
	}
}
int main()
{
	string str;
	int kkk = 0;
	setlocale(LC_ALL, "Rus");
	cout << "Введите Ваше имя: ";
	cin >> str;

	if (chk(str) == false)
	{

		throw 000;
		cin.get();
	}

	else
	{
		cout << "Привет, " << str;
	}


	cin.get();
	return 0;
}