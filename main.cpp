#include "main_header.h"
#include <string>
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	conference *conferences[100];
	size_t id = 0;
	//read_file("data.txt", conferences, id);
	ifstream in_put;
	in_put.open("data.txt");
	if (!in_put.is_open())
	{
		cerr << "���� �� ������ ��� �� ����������";
		return -1;
	}
	string f_name, l_name, m_name, s_topic;
	char tmp[100];
	date s_start, s_end;
	//(id, f_name, l_name, m_name, s_start, s_end, s_topic)
	while (!in_put.eof())
	{
		in_put >> f_name;
		in_put >> l_name;
		in_put >> m_name;
		in_put >> tmp;
		s_start = s_start.convert(tmp);
		in_put >> tmp;
		s_end = s_start.convert(tmp);
		in_put >> s_topic;
		in_put.read(tmp, 1);
		name full_name(f_name, l_name, m_name);
		theme some_topic(s_topic);
		conference temp(id, full_name, s_start, s_end, some_topic);
		conferences[id] = &temp;
		conferences[id++]->print_conference();
	}
	const name f_str("������", "����", "��������");
	id--;
	find_str(conferences, f_str, id);
	in_put.close();
	return 0;
}
