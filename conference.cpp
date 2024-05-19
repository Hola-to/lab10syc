#include "conference.h"
#include <iostream>
conference::conference(size_t id, name full_name, date start, date end, theme ttopic)
{
	this->id = id;
	this->full_name = full_name;
	this->start = start;
	this->end = end;
	this->some_topic = ttopic;
}
conference::conference() {}
void conference::print_conference()
{
	cout << full_name.first_name << " " << full_name.last_name << " " << full_name.patronymic << " " << start.hours << ":" << start.minutes << " " << end.hours << ":" << end.minutes << " " << some_topic.topic << endl;
}
void conference::get_conference(name full_name, date start, date end, theme ttopic)
{
	this->full_name = full_name;
	this->start = start;
	this->end = end;
	this->some_topic = ttopic;
}
name conference::get_full_name()
{
	return full_name;
}
