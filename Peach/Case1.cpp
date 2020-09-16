#include "sum.h"
#include "Case1.h"
#include <ctime>
#include <iostream>
#include <iomanip>

using namespace std;

void menu_1(sum * new_f, int * new_mass_x)
{
	int cor = 0, all = 0;
	system("cls");
	int input_menu_1;
	bool exit = true;
	while (exit)
	{
		cout << "������� ��������� ����� �����������:" << endl;
		omega_out1(new_f);
		cout << endl;
		cout << "1. ������ ����������� ���� ������ �� ���� �����������." << endl;
		cout << "2. �������������� ���� ������ �� ���� �����������." << endl;
		cout << "3. � ���� ������ �����������." << endl;
		cin >> input_menu_1;
		switch (input_menu_1)
		{
		case 1:
			manual1(new_mass_x);
			comp1(new_mass_x, new_f);
			if (!answer1(check1(new_f)))
			{
				cali1(new_mass_x, new_f, check1(new_f));
				all++;
			}
			else
			{
				system("cls");
				all++;
				cor++;
			}
			relation1(cor, all);
			break;
		case 2:
			auto_input1(new_f, cor, all);
			relation1(cor, all);
			break;
		case 3:
			exit = false;
			break;
		default:
			cout << "����������� ������ �����, ��������� �������" << endl;
			break;
		}
	}
}

void omega_out1(sum * new_f)
{
	for (int i = 0; i < 10; i++)
	{
		new_f[i].omega_out();
		cout << endl;
	}
}

void auto_input1(sum * new_f, int & new_cor, int & new_all)
{
	int auto_mass_x0[10]{ 1, 1, 0, 1, 0, 1, 0, 1, 1 },
		auto_mass_x1[10]{ 0, 0, 1, 1, 0, 0, 0, 1, 0 },
		auto_mass_x2[10]{ 0, 1, 0, 1, 0, 0, 1, 0, 1 },
		auto_mass_x3[10]{ 0, 1, 1, 0, 1, 0, 1, 0, 0 },
		auto_mass_x4[10]{ 1, 0, 0, 1, 1, 0, 0, 1, 0 },
		auto_mass_x5[10]{ 1, 1, 0, 0, 1, 0, 0, 1, 1 },
		auto_mass_x6[10]{ 0, 0, 1, 0, 1, 1, 0, 1, 1 },
		auto_mass_x7[10]{ 0, 1, 1, 0, 0, 1, 0, 0, 0 },
		auto_mass_x8[10]{ 1, 1, 0, 1, 1, 1, 0, 1, 1 },
		auto_mass_x9[10]{ 1, 1, 0, 1, 1, 0, 1, 0, 0 };
	cout << "������� �������� ����� ��������" << endl;
	int cicle, i = 0;
	cin >> cicle;
	system("cls");
	cout << "����������, ���������.";
	while (i < cicle)
	{
		i++;
		int num = rand() % 10;
		switch (num)
		{
		case 0:
			comp_auto1(auto_mass_x0, new_f);
				if (check1(new_f) != num)
				{
					cali1(auto_mass_x0, new_f, num, check1(new_f));
					new_all++;
				}
				else
				{
					new_all++;
					new_cor++;
				}
			break;
		case 1:

			comp_auto1(auto_mass_x1, new_f);
				if (check1(new_f) != num)
				{
					cali1(auto_mass_x1, new_f, num, check1(new_f));
				new_all++;
				}
				else
				{
					new_all++;
					new_cor++;
				}
			break;
		case 2:

			comp_auto1(auto_mass_x2, new_f);
				if (check1(new_f) != num)
				{
					cali1(auto_mass_x2, new_f, num, check1(new_f));
					new_all++;
				}
				else
				{
					new_all++;
						new_cor++;
					}
			break;
		case 3:

			comp_auto1(auto_mass_x3, new_f);
				if (check1(new_f) != num)
				{
					cali1(auto_mass_x3, new_f, num, check1(new_f));
					new_all++;
				}
				else
				{
					new_all++;
					new_cor++;
				}
			break;
		case 4:

			comp_auto1(auto_mass_x4, new_f);
				if (check1(new_f) != num)
				{
					cali1(auto_mass_x4, new_f, num, check1(new_f));
					new_all++;
				}
				else
				{
					new_all++;
					new_cor++;
				}
			break;
		case 5:

			comp_auto1(auto_mass_x5, new_f);
				if (check1(new_f) != num)
				{
					cali1(auto_mass_x5, new_f, num, check1(new_f));
					new_all++;
				}
				else
				{
					new_all++;
					new_cor++;
				}
			break;
		case 6:

			comp_auto1(auto_mass_x6, new_f);
			if (check1(new_f) != num)
			{
				cali1(auto_mass_x6, new_f, num, check1(new_f));
			new_all++;
			}
			else
			{
			new_all++;
			new_cor++;
			}
			break;
		case 7:
			comp_auto1(auto_mass_x7, new_f);
			if (check1(new_f) != num)
			{
				cali1(auto_mass_x7, new_f, num, check1(new_f));
			new_all++;
			}
			else
			{
			new_all++;
			new_cor++;
			}
			break;
		case 8:
			comp_auto1(auto_mass_x8, new_f);
			if (check1(new_f) != num)
			{
				cali1(auto_mass_x8, new_f, num, check1(new_f));
			new_all++;
			}
			else
			{
			new_all++;
			new_cor++;
			}
			break;
		case 9:
			comp_auto1(auto_mass_x9, new_f);
			if (check1(new_f) != num)
			{
				cali1(auto_mass_x9, new_f, num, check1(new_f));
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
	cout << "����������� ����������� �������!" << endl;
}

void cali1(int * new_mass_x, sum * new_f, int right_num, int wrong_num)
{
	for (int i = 0; i < 9; i++)
	{
		if (new_mass_x[i] == 1)
		{
			new_f[right_num].omega_change_up(i);
			new_f[wrong_num].omega_change_down(i);
		}
	}
}

void cali1(int * new_mass_x, sum * new_f, int wrong_num)
{
	cout << "����� ����� ���� �������?" << endl;
	int right_num;
	cin >> right_num;
	for (int i = 0; i < 9; i++)
	{
		if (new_mass_x[i] == 1)
		{
			new_f[right_num].omega_change_up(i);
			new_f[wrong_num].omega_change_down(i);
		}
	}
	system("cls");
	cout << "����������� ����������� �������!" << endl;
}

bool answer1(int new_i_max)
{
	bool ans;
	cout << "������������ �����: " << new_i_max << " ��� ������������� ���������� �����? (0 = ���; 1 = ��)" << endl;
	cin >> ans;
	return ans;
}

int check1(sum * new_f)
{
	int val_max = new_f[0].get_value();
	int i_max = 0;
	for (int i = 1; i < 10; i++)
	{
		if (val_max < new_f[i].get_value())
		{
			val_max = new_f[i].get_value();
			i_max = i;
		}
	}
	return i_max;
}

void manual1(int * new_mass_x)
{
	cout << "������� ����� ��� �������������(� ���� ���������� '0' � '1'): " << endl;
	cin >> new_mass_x[0] >> new_mass_x[1] >> new_mass_x[2] >> new_mass_x[3] >> new_mass_x[4] >> new_mass_x[5] >> new_mass_x[6] >> new_mass_x[7] >> new_mass_x[8];
}

void comp1(int * new_mass_x, sum * new_f)
{
	cout << "������� �������� �������: ";
	for (int i = 0; i < 10; i++)
	{
		new_f[i].calc(new_mass_x);
		cout << new_f[i].get_value() << " ";
	}
	cout << endl;
}

void comp_auto1(int * new_mass_x, sum * new_f)
{
	for (int i = 0; i < 10; i++)
		new_f[i].calc(new_mass_x);
}

void relation1(int new_cor, int new_all)
{
	double relation = double(new_cor) / double(new_all) * 100;
	cout << "������� ������� ����������� �������������:" << setprecision(4) <<  relation << "%" << endl;
}