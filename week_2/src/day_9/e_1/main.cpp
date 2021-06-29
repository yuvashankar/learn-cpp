#include <iostream>

int main()
{
    //declear an int
    std::uint32_t an_int = 420;
    // std:;uint32_t another_int = 240;

    std::uint32_t &r_an_int = an_int;

    std::uint32_t *p_an_int = &an_int;

    std::cout << "My int :" << an_int << "\t address: " << &an_int << std::endl;
    std::cout << "r_an_int: "<< r_an_int << "\t p_an_int: " << p_an_int << std::endl;

    r_an_int = 920;
    
    std::cout << "My int :" << an_int << "\t address: " << &an_int << std::endl;

    *p_an_int = 290;
    
    std::cout << "My int :" << an_int << "\t address: " << &an_int << std::endl;

    


}