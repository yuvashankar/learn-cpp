#include <iostream>

int main(int argc, char const *argv[])
{
    std::uint32_t my_int = 420;
    std::uint32_t *p_int_pointer = &my_int;
    
    std::cout << "Stray Pointer: " << p_int_pointer << std::endl;
    return 0;
}
