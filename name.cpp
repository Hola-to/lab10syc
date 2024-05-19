#include "name.h"
#include <iostream>
using namespace std;
name::name(string f_name, string l_name, string mid_name)
{
	this->first_name = f_name;
	this->last_name = l_name;
	this->patronymic = mid_name;
}
void name::get_fname(string f_name, string l_name, string mid_name)
{
	this->first_name = f_name;
	this->last_name = l_name;
	this->patronymic = mid_name;
}