#include "name.h"
name::name(char f_name, char l_name, char mid_name)
{
	this->first_name = f_name;
	this->last_name = l_name;
	this->patronymic = mid_name;
}
void name::get_fname(char f_name, char l_name, char mid_name)
{
	this->first_name = f_name;
	this->last_name = l_name;
	this->patronymic = mid_name;
}