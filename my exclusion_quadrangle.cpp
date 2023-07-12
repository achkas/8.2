#include "my exclusion_quadrangle.h"

const char* my_exclusion_quadrangle::what() const
{
	return "Четырёхугольник: ошибка создания фигуры. Причина: сумма углов не равна 360";
}