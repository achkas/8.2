#include "heirs  triangle.h"
#include "heirs my_exclusion_t.h"

RightTriangle::RightTriangle() {
	angle_C = 90;
	name = "Прямоугольный треугольник: ";
}

int RightTriangle::checkR(int angle_C)
{
	 if (angle_C != 90) { throw my_exclusion_tR(); }
	return 0;
}


 IsoscelesTriangle ::IsoscelesTriangle() {
		side_c = 10;
		angle_C = 50;
		name = "Равнобедренный треугольник: ";
	}

 int IsoscelesTriangle::checkI(int angle_A, int angle_C, int side_a, int side_c)
 {
	  if ((angle_A != angle_C) || (side_a != side_c)) { throw my_exclusion_tI(); }
	 return 0;
 }

	EquilateralTriangle::EquilateralTriangle() {
		side_a = 30;
		side_b = 30;
		angle_A = 60;
		angle_C = 60;
		name = "Равносторонний треугольник: ";
	}

	int EquilateralTriangle::checkE(int angle_A, int angle_B, int angle_C, int side_a, int side_b, int side_c)
	{
		 if (((side_a == side_b) && (side_b == side_c) && (side_c == side_a))
			 && ((angle_A == 60) && (angle_B == 60) && (angle_C == 60)))
			 return 0;
		 else
		 {
			 throw my_exclusion_tE();

		 }
			
     }
		
	

	
