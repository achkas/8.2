#include "heirs my_exclusion_t.h"

const char* my_exclusion_tR::what() const
{
	return "������������� �����������: ������ �������� ������. �������: ���� C �� ����� 90";
}

const char* my_exclusion_tI::what() const
{
	return "�������������� �����������: ������ �������� ������. �������: ������� a � c �� �����, ���� A � C �� �����";
}

const char* my_exclusion_tE::what() const
{
	return "�������������� �����������: ������ �������� ������. �������: ������� �,�,� �� �����, ���� �,�,� �� ����� 60";
}