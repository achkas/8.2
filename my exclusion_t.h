#pragma once
#include <exception> 

class my_exclusion_t: public std::exception 
{
public:
	
	const char* what() const override;
	
};