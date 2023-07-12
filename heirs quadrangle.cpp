
#include "heirs quadrangle.h"
#include <iostream>
#include "my exclusion_heirs_quadrangle.h"

square::square() {
	        side_a = 20;
			side_b = 20;
			side_c = 20;
			side_d = 20;
			angle_A = 90;
			angle_B = 90;
			angle_C = 90;
			angle_D = 90;
			name = "квадрат: ";

			if (((side_a == side_b) && (side_b == side_c) && (side_c == side_d) && (side_d == side_a))
				&& ((angle_A == 90) && (angle_B == 90) && (angle_C == 90) && (angle_D == 90))) {

				std::cout;
			}
			else
			{
				throw my_exclusion_square();

			}			
}

parallelogram::parallelogram() {
	side_a = 20;
	side_b = 30;
	side_c = 20;
	side_d = 30;
	angle_A = 30;
	angle_B = 40;
	angle_C = 30;
	angle_D = 40;
	name = "Параллелограмм: ";

	if (((side_a == side_c) && (side_b == side_d))
		&& ((angle_A == angle_C) && (angle_B == angle_D)))
	{
		std::cout;
	}
	else
	{
		throw my_exclusion_parallelogram();

	}
}