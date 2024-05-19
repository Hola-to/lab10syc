#include "conference.h"
#include <iostream>
conference::conference(size_t id, char first_name, char last_name, char patronymic, date start, date end, char topic):
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
	printf("%u %c %c %c %c", id, first_name, last_name, patronymic, topic);
}
void conference::get_conference(size_t id, char first_name, char last_name, char patronymic, date start, date end, char topic)
{
	this->id = id;
	this->first_name = first_name;
	this->last_name = last_name;
	this->patronymic = patronymic;
	this->start = start;
	this->end = end;
	this->topic = topic;
}
