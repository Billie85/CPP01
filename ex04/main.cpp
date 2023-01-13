#include <iostream>
#include <fstream>
#include <string>
#include <unistd.h>
#include <stdio.h>

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
    std::ifstream open_file(file_name.c_str());
    if (!open_file.is_open())
    {
        std::cerr << "Error : Unable to open file:" << file_name << std::endl;
        return 1;
    }
    std::string line;
    while(1)
    {
        if (open_file.eof())
            return 0;
            std::getline(open_file, line);
			for (int i = 0; line[i]; i++)
			{
				std::cout << line[i];
				size_t find_pos = line.find(str1);
				if (find_pos == std::string::npos)
				{
					std::cerr << "Not Found" << std::endl;
					break;
				}
				std::cout << "Find in position -> " << find_pos << std::endl;
				line.erase(find_pos, str1.size());
				std::cout << line.insert(find_pos, str2) << std::endl;
			}
    }
    open_file.close();
    return 0;
}