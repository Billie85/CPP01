#include <iostream>
#include <fstream>
#include <string>
#include <unistd.h>
#include <stdio.h>

//空文字の場合の処理をする。
int main(int argc, char *argv[])
{
	if (argc < 4)
	{
		std::cerr << "too many arguments" << std::endl;
		return 1;
	}
	std::string file_name(argv[1]);
	std::string str1(argv[2]);
	std::string str2(argv[3]);
	std::ifstream open_file(file_name.c_str());//ifstreamを使ってファイルを読み込む。
	if (!open_file.is_open())
	{
		std::cerr << "Error : Unable to open file:" << file_name << std::endl;
		return 1;
	}
	std::string line;
	while(getline(open_file, line));
	{
		sleep(1);
		std::cout << line << std::endl;

		//std::cout << line.find(str1) << std::endl;
		//findのエラー処理npos
	}
	open_file.close();
	return 0;
}