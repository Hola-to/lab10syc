#include "main_header.h"
void read_file(const char* file_name, conference* conferences[], size_t& id)
{
	ifstream in_put;
	in_put.open(file_name);
	if (!in_put.is_open())
	{
		cerr << "Файл не открыт или не существует";
		return;
	}
	char f_name, l_name, m_name, s_topic;
	char tmp[CHAR_MAX];
	date s_start, s_end;
	//(id, f_name, l_name, m_name, s_start, s_end, s_topic)
	while (!in_put.eof())
	{
		conference* temp = new conference;
		in_put >> f_name;
		in_put >> l_name;
		in_put >> m_name;
		in_put >> tmp;
		s_start = s_start.convert(tmp);
		in_put >> tmp;
		s_end = s_start.convert(tmp);
		in_put >> s_topic;
		in_put.read(tmp, 1);
		temp->get_conference(id, f_name, l_name, m_name, s_start, s_end, s_topic);
		conferences[0] = temp;
	}
}