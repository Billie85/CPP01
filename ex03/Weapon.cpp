#include "Weapon.hpp"

const std::string &Weapon::getType(void) const
{
	return this->type;
}

void setType(std::string seting)
{
	this->type = seting;
}

Weapon::Weapon(std::string str)
{
	this->type = str;
}

Weapon::~Weapon()
{
}