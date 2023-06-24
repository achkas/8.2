#pragma once
#include "Triangle.h"


class RightTriangle :public Triangle {
public:
	RightTriangle();
	int checkR( int angle_C);
};
class IsoscelesTriangle :public Triangle {
public:
	IsoscelesTriangle(); 
	int checkI(int angle_A,  int angle_C, int side_a, int side_c);
};
class EquilateralTriangle :public Triangle {
public:
	EquilateralTriangle(); 
	int checkE(int angle_A, int angle_B, int angle_C, int side_a, int side_b, int side_c);
};
