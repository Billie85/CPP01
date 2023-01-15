#ifndef HUMANB_HPP
#define HUMANB_HPP
#include "HumanA.hpp"
#include "Weapon.hpp"

class HumanB
{
private:
	std::string name;
	Weapon *_weapon;
public:
void attack(void);
void setWeapon(Weapon &weapon);
	HumanB(std::string);
	~HumanB(void);
};

#endif