#pragma once
#include <string>
#include "my exclusion_t.h"

class Triangle {
protected:

	int side_a, side_b, side_c;
	int angle_A, angle_B, angle_C;
	std::string name;
public:

	Triangle();
	int get_side_a();
	int get_side_b();
	int get_side_c();
	int get_angle_A();
	int get_angle_B();
	int get_angle_C();
	std::string get_name();
	void print_info(Triangle*);
	int check(int angle_A, int angle_B, int angle_C);

};
