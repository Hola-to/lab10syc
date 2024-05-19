#include "main_header.h"
#include <algorithm>
void find_str(conference* con[], const name full_name, size_t count)
{
	size_t times = 0;
	cout << "Конференции с данным докладчиком: " << endl;
	while (count--)
	{
		if (con[count]->get_full_name() == full_name)
		{
			con[count]->print_conference();
			times++;
		}
	}
	if (times == 0)cout << "Человек с данным ФИО не найден";
}