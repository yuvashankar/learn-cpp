#include <iostream>
#include <array>
#include <vector>

int main(int argc, char const *argv[])
{

    std::cout << "Input argc is" << argc << std::endl;

    std::array my_array = {'a', 'b', 'c', 'd', 'e'};
    
    for (int i = argc - 1; i > 0; --i)
    {
        std::cout << argv[i];
    }

    return 0;
}
