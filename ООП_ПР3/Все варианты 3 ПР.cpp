

#include "pch.h"
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class kniga {
public:
	string janr;
	string avtor;
	string nazvanie;
	int cena;
	void set()
	{
		setlocale(LC_ALL, "Russian");
		cout << "Введите жанр:";
		cin >> janr;
		cout << "Введите автора:";
		cin >> avtor;
		cout << "Введите название:";
		cin >> nazvanie;
		cout << "Введите цену:";
		cin >> cena;
	};
	void show()
	{
		setlocale(LC_ALL, "Russian");
		cout << "Жанр:" << janr << endl;
		cout << "Автор:" << avtor << endl;
		cout << "Название:" << nazvanie << endl;

		cout << "Цена:" << cena << endl;
	};
};

class Student
{
private:
	string name;
	string surname;
	int age;
	int group;
	void set()
	{
		setlocale(LC_ALL, "Russian");
		cout << "Введите имя:";
		cin >> name;
		cout << "Введите фамилию:";
		cin >> surname;
		cout << "Введите возраст:";
		cin >> age;
		cout << "Введите номер группы:";
		cin >> group;
	};
	void show()
	{
		setlocale(LC_ALL, "Russian");
		cout << "Имя:" << name << endl;
		cout << "Фамилия:" << surname << endl;
		cout << "Возраст:" << age << endl;

		cout << "Группа №" << group << endl;
	};
};

class avto {
public:
	string marka;
	string nazvanie;
	int cena;
	void set()
	{
		setlocale(LC_ALL, "Russian");
		cout << "Введите марку машины:";
		cin >> marka;
		cout << "Введите название:";
		cin >> nazvanie;
		cout << "Введите цену:";
		cin >> cena;
	};
	void show()
	{
		setlocale(LC_ALL, "Russian");
		cout << "Жанр:" << marka << endl;
		cout << "Название:" << nazvanie << endl;

		cout << "Цена:" << cena << endl;
	};
};

class vektor {
public:
	int x1, y1;
	int x2, y2;
	void set()
	{
		setlocale(LC_ALL, "Russian");
		cout << "Введите координату X первой точки:";
		cin >> x1;
		cout << "Введите координату Y первой точки:";
		cin >> y2;
		cout << "Введите координату X второй точки:";
		cin >> x1;
		cout << "Введите координату Y второй точки:";
		cin >> y2;
	};
	void show()
	{
		setlocale(LC_ALL, "Russian");
		cout << endl << "Ветор идущий из точки с координатами (" << x1 << ";" << y1 << ") в точку с координатами (" << x2 << ";" << y2 << "имеет длинну(" << sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1));
	};
};

class library {
public:
	int n, r;
	kniga t[100];
	void set()
	{
		setlocale(LC_ALL, "Russian");
		cout << "Сколько в билиотеке книг?";
		cin >> n;
		for (r = 0; r < n; r++) t[r].set();
	};
	void show()
	{
		setlocale(LC_ALL, "Russian");
		cout << endl << "В библиотеке всего " << n << " книг." << endl;
		for (r = 0; r < n; r++)  t[r].show();
	};
};

int main()
{
	library vivod;
	vivod.set();
	vivod.show();
	return 1;
}