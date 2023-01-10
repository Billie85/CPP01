#include <iostream>
#include <string>

void sanshou(std::string &test2)
{
	test2 = "cに変更";
}

void pointer(std::string *test)
{
	*test = "bに変更";
}

int main(void)
{
	std::string test = "a";
	std::string test2 = "a";

	std::cout << test << std::endl;
	std::cout << test2 << std::endl;
	
	pointer(&test);
	sanshou(test2);

	std::cout << test << std::endl;
	std::cout << test2 << std::endl;
}