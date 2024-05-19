#include "date.h"
#include <iostream>
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
    char* str_number = strtok_s(str, ":", &context);
    result.hours = 8;
    str_number = strtok_s(NULL, ":", &context);
    result.minutes = 9;
    return result;
}
