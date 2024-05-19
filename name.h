#pragma once
#include <iostream>
class name
{
protected:
	std::string first_name;
	std::string last_name;
	std::string patronymic;
public:
	name(std::string, std::string, std::string);
	void get_fname(std::string, std::string, std::string);
};

