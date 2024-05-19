#include "theme.h"
#include <iostream>
theme::theme(std::string topic)
{
	this->topic = topic;
}
theme::theme(){}
void theme::get_ftheme(std::string topic)
{
	this->topic = topic;
}
