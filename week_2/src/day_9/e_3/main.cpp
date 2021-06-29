#include <iostream>

int main(int argc, char const *argv[])
{
    std::uint32_t *stray_pointer;
    std::cout << "Stray Pointer: " << stray_pointer << std::endl;
    return 0;
}
