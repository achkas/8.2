#include "my exclusion_heirs_quadrangle.h"

const char* my_exclusion_square::what() const
{
	return "�������: ������ �������� ������. �������:������� �� �����, ���� �� ����� 90";
}

const char* my_exclusion_parallelogram::what() const
{
	return "��������������: ������ �������� ������. �������:������� a,c � b,d ������� �� �����, ���� A,C � B,D ������� �� �����";
}

const char* my_exclusion_rhombus::what() const
{
	return "����: ������ �������� ������. �������:������� �� �����, ���� A,C � B,D ������� �� �����";
}

const char* my_exclusion_rectangle::what() const
{
	return "�������������: ������ �������� ������. �������:������� a,c � b,d ������� �� �����, ���� �� ����� 90";
}
