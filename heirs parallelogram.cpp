
#include "heirs parallelogram.h"
#include <iostream>
#include "my exclusion_heirs_quadrangle.h"

	rhombus:: rhombus() {
		side_a = 30;
		side_c = 30;
		name = "Ромб: ";

		if ((side_a == side_b) && (side_b == side_c) && (side_c == side_d) && (side_d == side_a))
		{
			std::cout;
		}
		else
		{
			throw my_exclusion_rhombus();

		}
	}