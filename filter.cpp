#include "main_header.h"
void find_str(conference* con[], name full_name, size_t count)
{
	size_t times = 0;
	cout << "\n����������� � ������ �����������: " << endl;
	while (count--)
	{
		if (con[count]->get_name() == full_name)
		{
			con[count]->print_conference();
			times++;
		}
	}
	if (times == 0)cout << "������� � ������ ��� �� ������";
}
void find_minute(conference* con[], date some_minute, size_t count)
{
	size_t times = 0;
	cout << "\n����������� ������������� ����� 15 �����: " << endl;
	while (count--)
	{
		if (con[count]->get_minute() > some_minute.minutes)
		{
			con[count]->print_conference();
			times++;
		}
	}
	if (times == 0)cout << "��� ����������� ������������� ����� 15 �����";
}