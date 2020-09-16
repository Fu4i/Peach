#pragma once
class sum
{
public:
	void omega_out();
	void calc(int * new_mass_x);
	int get_value();
	void omega_change_down(int new_i);
	void omega_change_up(int new_i);
	sum();
	~sum();
private:
	int * omega;
	int value;
};

