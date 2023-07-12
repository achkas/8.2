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
#include "my exclusion_quadrangle.h"
#include "my exclusion_heirs_quadrangle.h"


int main()
{
	setlocale(LC_ALL, "ru");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);	

	try
	{
		Triangle t;
		t.print_info(&t);
	}
	catch (const my_exclusion_t& ex)
	{
		std::cout << ex.what() << std::endl;

	}

try
	{
	RightTriangle r;
		r.print_info(&r);
	}
	catch (const my_exclusion_tR& ex)
	{
		std::cout << ex.what() << std::endl;

	}

	try
	{
		IsoscelesTriangle i;
		i.print_info(&i);
	}
	catch (const my_exclusion_tI& ex)
	{
		std::cout << ex.what() << std::endl;

	}

	try
	{
		EquilateralTriangle e;
		e.print_info(&e);
	}
	catch (const my_exclusion_tE& ex)
	{
		std::cout << ex.what() << std::endl;

	}

	try
	{
		quadrilateral w;
		w.print_info(&w);
	}
	catch (const my_exclusion_quadrangle& ex)
	{
		std::cout << ex.what() << std::endl;

	}

	try
	{
		square s;
		s.print_info(&s);
	}
	catch (const my_exclusion_square& ex)
	{
		std::cout << ex.what() << std::endl;

	}

	try
	{
		rectangle rec;
		rec.print_info(&rec);
	}
	catch (const my_exclusion_rectangle& ex)
	{
		std::cout << ex.what() << std::endl;

	}

	try
	{
		parallelogram par;
		par.print_info(&par);
	}
	catch (const my_exclusion_parallelogram& ex)
	{
		std::cout << ex.what() << std::endl;

	}

	try
	{
		rhombus rho;
		rho.print_info(&rho);
	}
	catch (const my_exclusion_rhombus& ex)
	{
		std::cout << ex.what() << std::endl;

	}	

	return 0;

}

