#pragma once
class date
{
public:
	unsigned hours;
	unsigned minutes;
public:
	date(unsigned, unsigned);
	date();
	void get_fdata(unsigned, unsigned);
	date convert(char* str);
};

