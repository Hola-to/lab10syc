#pragma once
#include <iostream>
class name
{
public:
	std::string first_name;
	std::string last_name;
	std::string patronymic;
	name(std::string, std::string, std::string);
	name();
	bool operator ==(const name& name);
	void get_fname(std::string, std::string, std::string);
	std::string get_first_name();
	std::string get_last_name();
	std::string get_middle_name();
};

