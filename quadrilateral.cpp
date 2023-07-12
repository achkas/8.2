#include "quadrilateral.h"
#include <iostream>
#include "my exclusion_quadrangle.h"

quadrilateral::quadrilateral() {
		side_a = 10;
		side_b = 20;
		side_c = 30;
		side_d = 40;
		angle_A = 150;
		angle_B = 60;
		angle_C = 70;
		angle_D = 80;
		name = "Четырёхугольник: ";

		int sum_w = (angle_A + angle_B + angle_C + angle_D);
		if (sum_w != 360) {
			throw my_exclusion_quadrangle();
		}
	}

int quadrilateral::get_side_a() {
	return side_a;
}
int quadrilateral::get_side_b() {
	return side_b;
}
int quadrilateral::get_side_c() {
	return side_c;
}
int quadrilateral::get_side_d() {
	return side_d;
}
int quadrilateral::get_angle_A() {
	return	angle_A;
}
int quadrilateral::get_angle_B() {
	return	angle_B;
}
int quadrilateral::get_angle_C() {
	return	angle_C;
}
int quadrilateral::get_angle_D() {
	return	angle_D;
}
std::string quadrilateral::get_name() {
	return name;
}
void quadrilateral::print_info(quadrilateral*) {
	std::cout << get_name() << " "
		<< "(" <<"Стороны: "<< get_side_a() << ", "<< get_side_b() << ", "<< get_side_c() << ", "<< get_side_d() << "; "
		<< "Углы: "<< get_angle_A() << ", "<< get_angle_B() << ", "<< get_angle_C() << ", "<< get_angle_D() << ")" << " создан" << std::endl;

} 