#include "sum.h"
#include <iostream>
#include <ctime>
#include <iomanip>

using namespace std;

void sum::omega_out()
{
	for (int i = 0; i < 8; i++)
	{
		cout << left << "|" << setw(3) << setfill(' ') << omega[i] << setfill(' ') << "|" << " ";
	}
}

void sum::calc(int * new_mass_x)
{
	 value = new_mass_x[0] * omega[0] +
		new_mass_x[1] * omega[1] +
		new_mass_x[2] * omega[2] +
		new_mass_x[3] * omega[3] +
		new_mass_x[4] * omega[4] +
		new_mass_x[5] * omega[5] +
		new_mass_x[6] * omega[6] +
		new_mass_x[7] * omega[7] +
		new_mass_x[8] * omega[8];
}

void sum::omega_change_down(int new_i)
{
	omega[new_i]--;
}

void sum::omega_change_up(int new_i)
{
		omega[new_i]++;
}


int sum::get_value()
{
	return value;
}

sum::sum()
{	
	int * new_omega = new int[8];
	for (int i = 0; i < 9; i++)
	{
		new_omega[i] = rand() % 9 + 1;  
	}
	omega = new_omega;
}
sum::~sum()
{

}

