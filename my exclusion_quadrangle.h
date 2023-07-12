#pragma once
#include <exception> 

class my_exclusion_quadrangle : public std::exception
{
public:

	const char* what() const override;

};
