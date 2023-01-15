#include "Zombie.hpp"

int main()
{
	int max = 42;
	Zombie *p = zombieHorde(max, "42zombie");
	for(int i = 0; i < max; i++)
		p[i].announce();
	delete []p;
	system("leaks -q zombie");
	return 0;
}