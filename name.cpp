#include "name.h"
#include <iostream>
using namespace std;
name::name(std::string f_name, std::string l_name, std::string mid_name)
{
	this->first_name = f_name;
	this->last_name = l_name;
	this->patronymic = mid_name;
}
void name::get_fname(std::string f_name, std::string l_name, std::string mid_name)
{
	this->first_name = f_name;
	this->last_name = l_name;
	this->patronymic = mid_name;
}