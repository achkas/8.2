#pragma once
//#include "Triangle.h"
#include <exception>


class my_exclusion_t: public std::exception 
{
public:
	
	const char* what() const override;
	
};


//heirs my_exclusion_t





/*my_exclusion_t(char* msg) :exception(msg) {};*/

//const char* my_exclusion_tr::what() const