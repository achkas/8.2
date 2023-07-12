#include "heirs  triangle.h"
#include "heirs my_exclusion_t.h"
#include <iostream>

RightTriangle::RightTriangle() {
	angle_C = 90;
	name = "Прямоугольный треугольник: ";

	if (angle_C != 90) { throw my_exclusion_tR(); }
}




 IsoscelesTriangle ::IsoscelesTriangle() {
		side_c = 10;
		angle_C = 50;
		name = "Равнобедренный треугольник: ";

		if ((angle_A != angle_C) || (side_a != side_c)) { throw my_exclusion_tI(); }
	}

 

	EquilateralTriangle::EquilateralTriangle() {
		side_a = 30;
		side_b = 30;
		angle_A = 60;
		angle_C = 60;
		name = "Равносторонний треугольник: ";

		if (((side_a == side_b) && (side_b == side_c) && (side_c == side_a))
			&& ((angle_A == 60) && (angle_B == 60) && (angle_C == 60)))
			std::cout;
		else
		{
			throw my_exclusion_tE();

		}		
	}

	
		
	

	
