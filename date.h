#pragma once
class date
{
protected:
	unsigned hours;
	unsigned minutes;
public:
	date(unsigned, unsigned);
	date();
	void get_fdata(char, char);
	date convert(char* str);
};

