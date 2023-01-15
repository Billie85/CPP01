#include <iostream>
#include <string>
#include "Harl.hpp"

int main(int argc,char **argv)
{
	Harl h;

	if(argc == 2)
		h.complain(argv[1]);
	return 0;
}