#include "Triangle.h"
#include <iostream>
#include "my exclusion_t.h"
#include <exception>
#include "heirs my_exclusion_t.h"

Triangle::Triangle() {
	side_a = 10;
	side_b = 20;
	side_c = 30;
	angle_A =50;
	angle_B = 60;
	angle_C = 70;
	name = "�����������: ";
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


int Triangle::check(int angle_A, int angle_B, int angle_C/*, int side_a, int side_b, int side_c*/)
{
	int sum = (angle_A + angle_B + angle_C);
	if (sum != 180) { throw my_exclusion_t(); }
	
	return sum;
}


//void Triangle::print_info(Triangle*) {
//	std::cout << get_name() << std::endl
//		<< "�������: " << "a=" << get_side_a() << " " << "b=" << get_side_b() << " " << "c=" << get_side_c() << std::endl
//		<< "����: " << "A=" << get_angle_A() << " " << "B=" << get_angle_B() << " " << "C=" << get_angle_C() << std::endl;
//}

//������������� �����������(������� 3, 4, 5; ���� 30, 60, 90) ������
void Triangle::print_info(Triangle*) {
	std::cout << get_name() << "("
		<< "�������: " << get_side_a() << ", " << get_side_b() << ", " << get_side_c() << " "
		<< "����: " << get_angle_A() << ", " << get_angle_B() << ", " << get_angle_C()<<")"<<" ������" << std::endl;
}