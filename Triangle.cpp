#include "Triangle.h"
#include <iostream>

Triangle::Triangle() {
	side_a = 10;
	side_b = 20;
	side_c = 30;
	angle_A = 50;
	angle_B = 60;
	angle_C = 70;
	name = "Треугольник: ";
}
int Triangle::get_side_a() {
	return side_a;
}
int Triangle::get_side_b() {
	return side_b;
}
int Triangle::get_side_c() {
	return side_c;
}
int Triangle::get_angle_A() {
	return	angle_A;
}
int Triangle::get_angle_B() {
	return	angle_B;
}
int Triangle::get_angle_C() {
	return	angle_C;
}
std::string Triangle:: get_name() {
	return name;
}
void Triangle::print_info(Triangle*) {
	std::cout << get_name() << std::endl
		<< "Стороны: " << "a=" << get_side_a() << " " << "b=" << get_side_b() << " " << "c=" << get_side_c() << std::endl
		<< "Углы: " << "A=" << get_angle_A() << " " << "B=" << get_angle_B() << " " << "C=" << get_angle_C() << std::endl;
}
