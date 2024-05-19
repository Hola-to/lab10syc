#include "main_header.h"
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	conference *conferences[100];
	size_t id;
	read_file("data.txt", conferences, id);
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