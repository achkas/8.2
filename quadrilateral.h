#pragma once
#include <string>

class quadrilateral
{

protected:

	int side_a, side_b, side_c, side_d,
		angle_A, angle_B, angle_C, angle_D;
	std::string name;

public:

	quadrilateral(); 
	int get_side_a();
	int get_side_b();
	int get_side_c();
	int get_side_d();
	int get_angle_A();
	int get_angle_B();
	int get_angle_C();
	int get_angle_D();
	std::string get_name();
	void print_info(quadrilateral*);


};
