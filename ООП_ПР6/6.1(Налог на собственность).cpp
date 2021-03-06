
#include "pch.h"
#include <iostream>
using namespace std;

class Property {
public:
	int worth;
	Property() {}
	virtual int result() = 0;
};
class Appartment :public Property {
public:
	Appartment(int a) { worth = a; }
	int result() {
		return worth / 1000;
	}
};
class Car : public Property {
public:
	Car(int a) { worth = a; }
	int result() {
		return worth / 200;
	}
};

class CountryHouse : public Property {
public:
	CountryHouse(int a) { worth = a; }
	int result() {
		return worth / 500;
	}
};


int main() {
	setlocale(LC_ALL, "Russian");
	Property **mas = new Property*[7];
	mas[0] = new Appartment(5600000);
	mas[1] = new Appartment(47900000);
	mas[2] = new Appartment(1980000);
	mas[3] = new Car(570000);
	mas[4] = new Car(240000);
	mas[5] = new CountryHouse(57800000);
	mas[6] = new CountryHouse(34700000);
	for (int i = 0; i < 7; i++) {
		cout << "налог на собственность равен " << '\t' << mas[i]->result() << endl;
	}
	for (int i = 0; i < 7; i++) {
		delete mas[i];
	}
	delete[]mas;
	system("pause");
	return 0;
}