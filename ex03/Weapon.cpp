#include "Weapon.hpp"

Weapon::Weapon(std::string str)
{
	this->type = str;
}

Weapon::~Weapon()
{
}

const std::string &Weapon::getType(void) const
{
	return this->type;
}

void Weapon::setType(std::string name)
{
	this->type = name;
}