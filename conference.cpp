#include "conference.h"
#include <iostream>
conference::conference(size_t id, std::string first_name, std::string last_name, std::string patronymic, date start, date end, std::string topic):
	name(first_name, last_name, patronymic), theme(topic)
{
	this->id = id;
	this->start = start;
	this->end = end;
}
conference::conference():name(first_name, last_name, patronymic), theme(topic) {}
void conference::print_conference()
{
	cout << first_name << " " << last_name << " " << patronymic << " " << start.hours << ":" << start.minutes << " " << end.hours << ":" << end.minutes << " " << topic << endl;
}
void conference::get_conference(std::string first_name, std::string last_name, std::string patronymic, date start, date end, std::string topic)
{
	this->first_name = first_name;
	this->last_name = last_name;
	this->patronymic = patronymic;
	this->start = start;
	this->end = end;
	this->topic = topic;
}
