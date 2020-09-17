#include "sum.h"
#include "Case2.h"
#include <ctime>
#include <iostream>
#include <iomanip>

using namespace std;

void menu_2(sum * new_f, int * new_mass_x)
{

	int cor = 0, all = 0;
	system("cls");
	int input_menu_1;
	bool exit = true;
	while (exit)
	{
		cout << "Текущее знаечение весов персептрона:" << endl;
		omega_out2(new_f);
		cout << endl;
		cout << "1. Ручной однократный ввод данных." << endl;
		cout << "2. Автоматический ввод данных." << endl;
		cout << "3. В меню выбора персептрона." << endl;
		cin >> input_menu_1;
		switch (input_menu_1)
		{
		case 1:
			manual2(new_mass_x);
			comp2(new_mass_x, new_f);
			if ((!answer2(check2(new_f))))
			{
				cali2(new_mass_x, new_f, check2(new_f));
				all++;
			}
			else
			{
				all++;
				cor++;
			}
			relation2(cor, all);
			break;
		case 2:
			auto_input2(new_f, cor, all);
			relation2(cor, all);
			break;
		case 3:
			exit = false;
			break;
		default:
			cout << "Критическая ошибка ввода, повторите попытку" << endl;
			break;
		}
	}
}

void omega_out2(sum * new_f)
{
	for (int i = 0; i < 5; i++)
	{
		new_f[i].omega_out();
		cout << endl;
	}
}

void comp2(int * new_mass_x, sum * new_f)
{
	cout << "Текущее значения функций: ";
	for (int i = 0; i < 5; i++)
	{
		new_f[i].calc(new_mass_x);
		cout << new_f[i].get_value() << " ";
	}
	cout << endl;
}

void manual2(int * new_mass_x)
{
	cout << "Введите число для распознавания(в виде комбинации '0' и '1'): " << endl;
	cin >> new_mass_x[0] >> new_mass_x[1] >> new_mass_x[2] >> new_mass_x[3] >> new_mass_x[4] >> new_mass_x[5] >> new_mass_x[6] >> new_mass_x[7] >> new_mass_x[8];
}

bool answer2(int new_i_max)
{
	bool ans;
	cout << "Распознанное число: " << new_i_max  << " Оно соответствует введенному числу? (0 = Нет; 1 = Да)" << endl;
	cin >> ans;
	return ans;
}
 
int check2(sum * new_f)
{
	int threshold = 10;
	for (int i = 0; i < 5; i++)
	{
		if (new_f[i].get_value() > threshold)
		{
			return i;				
		}
	}
	return 6;
}

void cali2(int * new_mass_x, sum * new_f, int wrong_num)
{
	cout << "Какое число было введено?" << endl;
	int right_num;
	cin >> right_num;
	for (int i = 0; i < 5; i++)
	{
		if (new_mass_x[i] == 1)
		{
			new_f[right_num].omega_change_up(i);
			new_f[wrong_num].omega_change_down(i);
		}
	}
	system("cls");
	cout << "Каллибровка произведена успешно!" << endl;
}

void cali2(int * new_mass_x, sum * new_f, int right_num, int wrong_num)
{
	for (int i = 0; i < 5; i++)
	{
		if (new_mass_x[i] == 1)
		{
			new_f[right_num].omega_change_up(i);
			new_f[wrong_num].omega_change_down(i);
		}
	}
}

void relation2(int new_cor, int new_all)
{
	double relation = double(new_cor) / double(new_all) * 100;
	cout << "Текущий процент корректного распознавания:" << setprecision(4) << relation << "%" << endl;
}

void comp_auto2(int * new_mass_x, sum * new_f)
{
	for (int i = 0; i < 5; i++)
		new_f[i].calc(new_mass_x);
}

void auto_input2(sum * new_f, int & new_cor, int & new_all)
{
	int auto_mass_x0[10]{ 1, 1, 0, 1, 0, 1, 0, 1, 1 },
		auto_mass_x1[10]{ 0, 0, 1, 1, 0, 0, 0, 1, 0 },
		auto_mass_x2[10]{ 0, 1, 0, 1, 0, 0, 1, 0, 1 },
		auto_mass_x3[10]{ 0, 1, 1, 0, 1, 0, 1, 0, 0 },
		auto_mass_x4[10]{ 1, 0, 0, 1, 1, 0, 0, 1, 0 };
	cout << "Введите желаемое число итераций" << endl;
	int cicle, i = 0;
	cin >> cicle;
	system("cls");
	cout << "Пожалуйста, подождите.";
	while (i < cicle)
	{
		i++;
		int num = rand() % 5;
		switch (num)
		{
		case 0:
			comp_auto2(auto_mass_x0, new_f);
			if (check2(new_f) != num)
			{
				cali2(auto_mass_x0, new_f, num, check2(new_f));
				new_all++;
			}
			else
			{
				new_all++;
				new_cor++;
			}
			break;
		case 1:
			comp_auto2(auto_mass_x1, new_f);
			if (check2(new_f) != num)
			{
				cali2(auto_mass_x1, new_f, num, check2(new_f));
				new_all++;
			}
			else
			{
				new_all++;
				new_cor++;
			}
			break;
		case 2:
			comp_auto2(auto_mass_x2, new_f);
			if (check2(new_f) != num)
			{
				cali2(auto_mass_x2, new_f, num, check2(new_f));
				new_all++;
			}
			else
			{
				new_all++;
				new_cor++;
			}
			break;
		case 3:
			comp_auto2(auto_mass_x3, new_f);
			if (check2(new_f) != num)
			{
				cali2(auto_mass_x3, new_f, num, check2(new_f));
				new_all++;
			}
			else
			{
				new_all++;
				new_cor++;
			}
			break;
		case 4:
			comp_auto2(auto_mass_x4, new_f);
			if (check2(new_f) != num)
			{
				cali2(auto_mass_x4, new_f, num, check2(new_f));
				new_all++;
			}
			else
			{
				new_all++;
				new_cor++;
			}
			break;
		}
	}
	system("cls");
	cout << "Каллибровка произведена успешно!" << endl;
}