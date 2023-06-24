#include "heirs my_exclusion_t.h"

const char* my_exclusion_tR::what() const
{
	return "Ошибка создания фигуры. Причина: угол C не равен 90";
}

const char* my_exclusion_tI::what() const
{
	return "Ошибка создания фигуры. Причина: стороны a и c не равны, углы A и C не равны";
}

const char* my_exclusion_tE::what() const
{
	return "Ошибка создания фигуры. Причина: стороны а,в,с не равны, углы А,В,С не равны 60";
}