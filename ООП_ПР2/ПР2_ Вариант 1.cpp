// ConsoleApplication37.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "RUS");
	double a = 4.8, b = -7.9, n, m;
	if (a >= b) { n = (pow(sqrt(a - b), 3)); }
	if (a < b) { n = (pow(a, 2) + ((a - b) / (sin(a*b)))); }
	if (n < b) { m = (((n + a) / (-b)) + (sqrt((pow(a, 2)) - cos(n)))); }
	if (n == b) { m = (pow(b, 2) + ((sin(n*a)) / (cos(n*a)))); }
	if (n > b) { m = ((pow(b, 3)) + (n*(pow(a, 2)))); }

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "n = " << n << endl;
	cout << "m = " << m << endl;
	return 0;
}
