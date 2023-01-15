#include "HumanB.hpp"

void HumanB::setWeapon(Weapon &weapon)
{
	 this->_weapon = &weapon;
	 return ;
}

void HumanB::attack(void)
{
	if (this->_weapon)
	{
		std::cout << this->name << "  attacks with their " << this->_weapon->getType() << std::endl;
	}
	else
	{
		std::cout << this->name << " attacks " << std::endl;
		return ;
	}
}

HumanB::HumanB(std::string name)
{
	this->name = name;
	return ;
}
HumanB::~HumanB(void)
{
	return ;
}