#pragma once
#include "my exclusion_quadrangle.h"

class my_exclusion_square :public my_exclusion_quadrangle {
public:
	const char* what() const override;
};

class my_exclusion_parallelogram :public my_exclusion_quadrangle {
public:
	const char* what() const override;
};

class my_exclusion_rhombus :public my_exclusion_quadrangle {
public:
	const char* what() const override;
};

class my_exclusion_rectangle :public my_exclusion_quadrangle {
public:
	const char* what() const override;
};
