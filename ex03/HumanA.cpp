#include "HumanA.hpp"

void HumanA::attack(void)
{
	std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
	return ;
}

HumanA::HumanA(std::string name, Weapon &wea) : weapon(wea)//個々の部分名前の方はいらないのなんでだろう。
{
	this->name = name;
	return ;
}

HumanA::~HumanA()
{
}