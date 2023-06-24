// Многофайловые проекты и библиотеки 6.3

#include <iostream>
#include <string>
#include <windows.h>
#include "heirs  triangle.h"
#include "Triangle.h"
#include "quadrilateral.h"
#include "heirs quadrangle.h"
#include "heirs parallelogram.h"
#include "heirs square.h"
#include "my exclusion_t.h"
#include "heirs my_exclusion_t.h"

int main()
{
	setlocale(LC_ALL, "ru");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Triangle t;
	RightTriangle r;
	IsoscelesTriangle i;
	EquilateralTriangle e;

	
	

	try
	{
		t.check(t.get_angle_A(), t.get_angle_B(), t.get_angle_C());
		t.print_info(&t);
		std::cout << std::endl;
		
	}
	catch (const my_exclusion_t& ex)
	{
		std::cout << ex.what() << std::endl; 
		return 0;
	}

	try
	{
		r.checkR( r.get_angle_C());
		r.print_info(&r);
		std::cout << std::endl;

	}
	catch (const my_exclusion_tR & ex)
	{
		std::cout << ex.what() << std::endl;		
	}

	try
	{
		i.checkI(i.get_angle_A(),  i.get_angle_C(), i.get_side_a(), i.get_side_c());
		i.print_info(&i);
		std::cout << std::endl;

	}
	catch (const my_exclusion_tI& ex)
	{ 
		std::cout << ex.what() << std::endl;		
	}

	try
	{
		e.checkE(e.get_angle_A(), e.get_angle_B(), e.get_angle_C(), e.get_side_a(), e.get_side_b(), e.get_side_c());
		e.print_info(&e);
		std::cout << std::endl;

	}
	catch (const my_exclusion_tE& ex)
	{
		std::cout << ex.what() << std::endl;		
	}
	



	/*t.print_info(&t);
	std::cout << std::endl;
	r.print_info(&r);
	std::cout << std::endl;
	i.print_info(&i);
	std::cout << std::endl;
	e.print_info(&e);
	std::cout << std::endl;*/

	quadrilateral w;
	square s;
	rectangle rec;
	parallelogram par;
	rhombus rho;

	/*w.print_info(&w);
	std::cout << std::endl;
	s.print_info(&s);
	std::cout << std::endl;
	rec.print_info(&rec);
	std::cout << std::endl;
	par.print_info(&par);
	std::cout << std::endl;
	rho.print_info(&rho);*/

	return 0;

}

