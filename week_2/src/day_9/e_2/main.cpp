//Does not compile, by design

#include <iostream>

int main(int argc, char const *argv[])
{
    const std::uint32_t varOne = 6;
    const std::uint32_t *p_constant_int = &varOne;

    *p_constant_int = 7;

    const std::uint32_t varTwo = 6;
    *p_constant_int = &varTwo;
    

    return 0;
}

