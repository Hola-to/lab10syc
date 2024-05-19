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
		cerr << "Файл не открыт или не существует";
		return -1;
	}
	string f_name, l_name, m_name, s_topic;
	char tmp[100];
	date s_start, s_end;
	//(id, f_name, l_name, m_name, s_start, s_end, s_topic)
	while (!in_put.eof())
	{
		conference* temp = 0;
		getline(in_put, f_name);
		in_put >> l_name;
		in_put >> m_name;
		in_put >> tmp;
		s_start = s_start.convert(tmp);
		in_put >> tmp;
		s_end = s_start.convert(tmp);
		in_put >> s_topic;
		in_put.read(tmp, 1);
		temp->get_conference(f_name, l_name, m_name, s_start, s_end, s_topic);
		conferences[id++] = temp;
	}
	try {
		for (size_t i = 0; i < id; i++)
		{
			conferences[i]->print_conference();
		}
	}
	catch (const char* error)
	{
		cout << error;
	}
	return 0;
}