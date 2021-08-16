#include <iostream>
#include <fstream>


int main(int argc, char const *argv[])
{
    std::string file_name;
    std::cout << "File Name? ";
    
    std::getline(std::cin, file_name);

    std::ifstream f(file_name);
    if(!f.is_open())
    {
        std::cout <<"Failed to open file";
    }
    
    char temp_string;
    while (f >> std::noskipws >> temp_string)
    {
        if(temp_string > 40)
        {
            std::cout << temp_string;
        }

    }
    std::cout << std::endl;
    return 0;
}

