#include "main_header.h"
void find_str(conference* con[], name full_name, size_t count)
{
	size_t times = 0;
	cout << "\nКонференции с данным докладчиком: " << endl;
	while (count--)
	{
		if (con[count]->get_name() == full_name)
		{
			con[count]->print_conference();
			times++;
		}
	}
	if (times == 0)cout << "Человек с данным ФИО не найден";
}
void find_minute(conference* con[], date some_minute, size_t count)
{
	size_t times = 0;
	cout << "\nКонференции длительностью более 15 минут: " << endl;
	while (count--)
	{
		if (con[count]->get_minute() > some_minute.minutes)
		{
			con[count]->print_conference();
			times++;
		}
	}
	if (times == 0)cout << "Нет конференций длительностью более 15 минут";
}