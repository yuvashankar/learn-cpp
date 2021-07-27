#include <iostream>


class Rocket
{
private:
    std::uint32_t hydrogen_level;
    std::uint32_t oxygen_level;
public:
    Rocket(/* args */);
    std::uint32_t get_hydrogen_level() const { return hydrogen_level; };
    std::uint32_t get_oxygen_level() const { return oxygen_level; };
    virtual ~Rocket() = default;
};

Rocket::Rocket(/* args */): 
hydrogen_level(100), 
oxygen_level(100)
{
}

class Airplane
{
private:
    std::uint32_t wingspan;
public:
    Airplane(/* args */);
    std::uint32_t get_wingspan() const { return wingspan; };
    virtual ~Airplane() = default;
};

Airplane::Airplane(/* args */):
wingspan(10)
{
}


class JetPlane : public Airplane, public Rocket
{
private:
    /* data */
public:
    JetPlane(/* args */);
    ~JetPlane();
};

JetPlane::JetPlane(/* args */)
{
}

JetPlane::~JetPlane()
{
}

class Seven47 : public JetPlane
{
private:
    std::uint32_t number_of_seats;
public:
    Seven47(/* args */);
    std::uint32_t get_seating_size() const { return number_of_seats; };
    ~Seven47() = default;
};

Seven47::Seven47(/* args */) : 
number_of_seats(420)
{
}


int main(int argc, char const *argv[])
{
    Seven47 my_jet;
    
    std::cout << my_jet.get_hydrogen_level() << std::endl;
    std::cout << my_jet.get_seating_size() << std::endl;

    return 0;
}
