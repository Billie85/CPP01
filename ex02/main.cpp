#include <iostream>
#include <string>

int main()
{
	std::string s = "HI THIS IS BRAIN";
	std::string *stringPTR = &s;
	std::string &stringREF = s;

	std::cout << "The memory address of the string variable "<< &s << std::endl;
	std::cout << "The memory address held by stringPTR.     "<< &stringPTR << std::endl;
	std::cout << "The memory address held by stringREF.     "<< &stringREF << std::endl;
	std::cout << "The value of the string variable.         "<< s << std::endl;
	std::cout << "The value pointed to by stringPTR.        "<< *stringPTR << std::endl;
	std::cout << "The value pointed to by stringREF.        "<< stringREF << std::endl;
	return 0;
}
/* 文字列変数sのアドレス: &s
stringPTRが保持するアドレス: &stringPTR
stringREFが参照するアドレス: &stringREF
文字列変数sの値: s
stringPTRが指す値: *stringPTR
stringREFが参照する値: stringREF */