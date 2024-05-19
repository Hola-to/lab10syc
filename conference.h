#pragma once
#include "date.h"
#include "name.h"
#include "theme.h"
class conference :
    public name, public theme
{
private:
    size_t id;
    date start;
    date end;
public:
    conference(size_t, char, char, char, date, date, char);
    conference();
    void print_conference();
    void get_conference(size_t, char, char, char, date, date, char);
};

