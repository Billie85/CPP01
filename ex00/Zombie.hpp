#ifndef ZOMBIE_CPP
#define ZOMBIE_CPP

#include <iostream>
#include <string>

class Zombie
{
private:
	std::string name;
	Zombie();
public:
	void announce(void);
	Zombie(std::string name);
	~Zombie();
};
Zombie	*newZombie( std::string name );
void	randomChump( std::string name );
#endif