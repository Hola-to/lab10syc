#include "conference.h"
#include <iostream>
conference::conference(size_t id, string first_name, string last_name, string patronymic, date start, date end, string topic):
	name(first_name, last_name, patronymic), theme(topic)
{
	this->id = id;
	this->first_name = first_name;
	this->last_name = last_name;
	this->patronymic = patronymic;
	this->start = start;
	this->end = end;
	this->topic = topic;
}
conference::conference():name(first_name, last_name, patronymic), theme(topic) {}
void conference::print_conference()
{
	printf("%u %s %s %s %s", id, first_name, last_name, patronymic, topic);
}
void conference::get_conference(string first_name, string last_name, string patronymic, date start, date end, string topic)
{
	this->first_name = first_name;
	this->last_name = last_name;
	this->patronymic = patronymic;
	this->start = start;
	this->end = end;
	this->topic = topic;
}
