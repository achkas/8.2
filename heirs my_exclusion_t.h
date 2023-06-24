#pragma once
#include "my exclusion_t.h"

class my_exclusion_tR : public my_exclusion_t 
{
public:

	const char* what() const override;

};

class my_exclusion_tI : public my_exclusion_t
{
public:

	const char* what() const override;

};

class my_exclusion_tE : public my_exclusion_t
{
public:

	const char* what() const override;

};