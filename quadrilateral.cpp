#include "quadrilateral.h"
#include <iostream>

quadrilateral::quadrilateral() {
		side_a = 10;
		side_b = 20;
		side_c = 30;
		side_d = 40;
		angle_A = 50;
		angle_B = 60;
		angle_C = 70;
		angle_D = 80;
		name = "Четырёхугольник: ";
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
	std::cout << get_name() << std::endl
		<< "Стороны: " << "a=" << get_side_a() << " " << "b=" << get_side_b() << " " << "c=" << get_side_c() << " " << "d=" << get_side_d() << std::endl
		<< "Углы: " << "A=" << get_angle_A() << " " << "B=" << get_angle_B() << " " << "C=" << get_angle_C() << " " << "D=" << get_angle_D() << std::endl;
}