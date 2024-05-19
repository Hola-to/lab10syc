#pragma once
#include "date.h"
#include "name.h"
#include "theme.h"
using namespace std;
class conference :
    public name, public theme
{
private:
    size_t id;
    date start;
    date end;
public:
    conference(size_t, string, string, string, date, date, string);
    conference();
    void print_conference();
    void get_conference(string, string, string, date, date, string);
};

