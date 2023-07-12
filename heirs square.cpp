
#include "heirs square.h"
#include <iostream>
#include "my exclusion_heirs_quadrangle.h"

rectangle::rectangle() {
			side_a = 10;
			side_c = 10;
			name = "Прямоугольник: ";

			if ((side_a == side_c) && (side_b == side_d))
			{
				std::cout;
			}
			else
			{
				throw my_exclusion_rectangle();

			}
		}