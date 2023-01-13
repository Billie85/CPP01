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
				size_t find_pos = line.find(str1);
				if (find_pos == std::string::npos)
					break;
				std::cout << line.erase(find_pos, str1.size()) << std::endl;
				std::cout << line.insert(find_pos, str2) << std::endl;
			}
    }
    open_file.close();
    return 0;
}