#pragma once
#include "date.h"
#include "name.h"
#include "theme.h"
using namespace std;
class conference
{
private:
    size_t id;
    date start;
    date end;
    theme some_topic;
    name full_name;
public:
    conference(size_t, name, date, date, theme);
    conference();
    void print_conference();
    void get_conference(name, date, date, theme);
    name get_full_name();
};


