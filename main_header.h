#pragma once
#include "conference.h"
#include <iostream>
#include <Windows.h>
#include <fstream>
using namespace std;
void find_str(conference* con[], const name full_name, size_t count);
void find_minute(conference* con[], date some_minute, size_t count);