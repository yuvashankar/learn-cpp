#include <iostream>

class StaticClass
{
private:
    std::uint32_t member_var;
    //e2
    static std::uint32_t private_static_var;

    //e4
    std::uint32_t alpha;
public:
    StaticClass(/* args */);
    ~StaticClass();
    static std::uint32_t static_member_var;
    static std::uint32_t get_private_static_var() {return StaticClass::private_static_var; };

    void get_alpha() { std::cout << "alpha: " << alpha << std::endl; };



    std::uint32_t get_member_var() { return this -> member_var; };
};

StaticClass::StaticClass(/* args */): member_var(420), alpha(1)
{
    StaticClass::static_member_var++;
}

StaticClass::~StaticClass()
{
    StaticClass::static_member_var--;

    std::cout << StaticClass::static_member_var << std::endl;
}

std::uint32_t StaticClass::static_member_var = 0;
//q2
std::uint32_t StaticClass::private_static_var = 120;

int main(int argc, char const *argv[])
{
    //q2
    std::cout << "Getting private Static Variable of StaticClass " << StaticClass::get_private_static_var() << std::endl;
    
    std::cout << "static_member_var before creating class " << StaticClass::static_member_var << std::endl;
    
    StaticClass my_class;
    
    std::cout << "static_member_var before creating class " << StaticClass::static_member_var << std::endl;

    std::cout << "Getting private member variable " << my_class.get_member_var() << std::endl;


    //q4 Don't think it works in C++17!!
    // void (StaticClass::*pointer_function)();

    // pointer_function = StaticClass::get_alpha;


    
    
    return 0;
}

