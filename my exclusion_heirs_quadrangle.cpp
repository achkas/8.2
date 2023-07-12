#include "my exclusion_heirs_quadrangle.h"

const char* my_exclusion_square::what() const
{
	return "Квадрат: ошибка создания фигуры. Причина:стороны не равны, углы не равны 90";
}

const char* my_exclusion_parallelogram::what() const
{
	return "Параллелограмм: ошибка создания фигуры. Причина:стороны a,c и b,d попарно не равны, углы A,C и B,D попарно не равны";
}

const char* my_exclusion_rhombus::what() const
{
	return "Ромб: ошибка создания фигуры. Причина:стороны не равны, углы A,C и B,D попарно не равны";
}

const char* my_exclusion_rectangle::what() const
{
	return "Прямоугольник: ошибка создания фигуры. Причина:стороны a,c и b,d попарно не равны, углы не равны 90";
}
