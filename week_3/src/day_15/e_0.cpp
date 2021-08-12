#include <iostream>

class StaticClass
{
private:
    /* data */
public:
    StaticClass(/* args */);
    ~StaticClass();
    static uint32_t itsStatic;

    static uint32_t SomeFunction();
};
//q2
uint32_t StaticClass::itsStatic = 0;
//q3
uint32_t StaticClass::SomeFunction() { return 4; }

StaticClass::StaticClass(/* args */)
{
}

StaticClass::~StaticClass()
{
}


int main(int argc, char const *argv[])
{
    //q4
    long (*ptr_function)(int);

    //q5
    long ( StaticClass::* ptr_function)(int);

    // long ( StaticClass:: *ptr_function)(int) theArray[10];

    return 0;
}
