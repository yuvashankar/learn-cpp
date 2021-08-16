#include <iostream>
#include <string>

int main(int argc, char const *argv[])
{
    std::string user_input;
    std::cout << "Enter your full name" << std::endl;
    std::getline(std::cin, user_input);
    
    std::cout << user_input << std::endl;

    std::cerr << "you're a failure" << std::endl;
    std::clog << "that's a fail" << std::endl;


    return 0;
}
