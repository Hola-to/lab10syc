#include "name.h"
#include <iostream>
using namespace std;
name::name(std::string f_name, std::string l_name, std::string mid_name)
{
	this->first_name = f_name;
	this->last_name = l_name;
	this->patronymic = mid_name;
}
name::name(){}
void name::get_fname(std::string f_name, std::string l_name, std::string mid_name)
{
	this->first_name = f_name;
	this->last_name = l_name;
	this->patronymic = mid_name;
}
bool name::operator ==(const name& name)
{
	if (first_name == name.first_name && last_name == name.last_name && patronymic == name.patronymic)return true;
	else return false;
}
string name::get_first_name()
{
	return first_name;
}
string name::get_last_name()
{
	return last_name;
}
string name::get_middle_name()
{
	return patronymic;
}