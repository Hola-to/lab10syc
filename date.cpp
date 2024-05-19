#include "date.h"
#include <iostream>
#pragma warning(disable: 4996)
date::date(unsigned s_hours, unsigned s_minutes)
{
	this->hours = s_hours;
	this->minutes = s_minutes;
}
date::date() {}
void date::get_fdata(unsigned s_hours, unsigned s_minutes)
{
    this->hours = s_hours;
    this->minutes = s_minutes;
}
date date::convert(char* str)
{
    date result;
    char* context = NULL;
    char* str_number = strtok(str, ":");
    result.hours = atoi(str_number);
    str_number = strtok(NULL, ":");
    result.minutes = atoi(str_number);
    return result;
}

