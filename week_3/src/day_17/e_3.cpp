#include <iostream>
#include <string>
#include <algorithm>

int main(int argc, char const *argv[])
{
    std::string input_stream;

    std::cout << "enter a phrase";
    std::getline(std::cin, input_stream);
    std::cout << std::endl;

    //Erase all occurances of "!""
    input_stream.erase(std::remove(input_stream.begin(), input_stream.end(), '!'), input_stream.end());

    // Replace all "#" with "$"
    std::replace(input_stream.begin(), input_stream.end(), '#', '$');

    std::cout << input_stream << std::endl;
    return 0;
}
