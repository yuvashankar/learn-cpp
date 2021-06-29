#include <iostream>

int main()
{
    std::uint16_t yourAge = 0;
    std::uint16_t * pYourAge = &yourAge;

    std::cout << "yourAge: " << yourAge << "\t pYourAge: " << pYourAge << std::endl;
    * pYourAge = 50;
    
    std::cout << "yourAge: " << yourAge << "\t pYourAge: " << pYourAge << std::endl;
}

