#include <iostream>
#include <string>

int main()
{
	std::string s = "HI THIS IS BRAIN";
	std::string *stringPTR = &s;
	std::string &stringREF = s;
	//参照の場合は宣言と初期化を一緒にやらないといけない

	std::cout << "&s adress-> "<< &s << std::endl;
	std::cout << "&stringPTR adress-> "<< &stringPTR << std::endl;
	std::cout << "---&stringREF adress-> ---"<< &stringREF << std::endl;
	std::cout << "s = "<< s << std::endl;
	std::cout << "stringPTR = "<< stringPTR << std::endl;
	std::cout << "stringREF = "<< stringREF << std::endl;
	//std::cout << "*stringPTR = "<< *stringPTR << std::endl;
	return 0;
}
