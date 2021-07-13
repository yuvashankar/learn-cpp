#include <iostream>

class SimpleCircle
{
private:
    std::uint32_t itsRadius;
public:
    SimpleCircle(/* args */);
    ~SimpleCircle();
    std::uint32_t get_radius() const {return itsRadius;};
};

SimpleCircle::SimpleCircle(/* args */)
{
}

SimpleCircle::~SimpleCircle()
{
}

int main(int argc, char const *argv[])
{
    SimpleCircle round;
    
    return 0;
}
