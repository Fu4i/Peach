#include <iostream>
#include <ctime>
#include "sum.h"
#include "Case1.h"
#include "Case2.h"

using namespace std;


int main()
{
	bool exit = true;
	setlocale(LC_ALL, "");
	sum * f = new sum[10];
	sum * F = new sum[5];
	int * mass_x = new int[9];
	int input;
	while (exit)
	{
		//test
		cout << "1. Базовый персептрон." << endl;
		cout << "2. Персептрон на основе дерва дихотомии." << endl;
		cout << "3. Выход из программы." << endl;
		cin >> input;
		switch (input)
		{
		case 1:
			menu_1(f, mass_x);
			system("cls");
			break;
		case 2:
			menu_2(F, mass_x);
			system("cls");
			break;
		case 3:
			exit = false;
			break;
		default:
			cout << "Критическая ошибка ввода, повторите попытку." << endl;
			break;
		}
	}
	system("pause");
	return 0;
}
