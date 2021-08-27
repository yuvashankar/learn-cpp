#include <iostream>
#include <string>

class DivideByZero 
{
public:
    DivideByZero(std::string variable_name);

    std::string GetString() { return its_string;};

private:
    std::string its_string;
};

DivideByZero::DivideByZero(std::string variable_name): its_string("Ya done goof son in: ")
{
    its_string += variable_name;
}

int main(int argc, char const *argv[])
{
    std::uint32_t numerator = 1;
    std::uint32_t denominator = 0;
    try
    {
        if (denominator == 0)
        {
            throw DivideByZero("main");
        }
        else
        {
            std::cout << numerator/denominator << std::endl;
        }
    }
    catch(DivideByZero& the_exception)
    {
        std::cerr << the_exception.GetString() << std::endl;
    }
    
    
    return 0;
}
