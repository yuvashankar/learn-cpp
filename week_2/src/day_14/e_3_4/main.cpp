#include <iostream>

class Vehicle
{
private:
    std::uint32_t m_weight; //in KGs
public:
    Vehicle(/* args */);
    Vehicle(std::uint32_t weight);
    ~Vehicle() = default;
    
    virtual void honk_horn() const = 0;
    virtual void open_engine_hood() = 0;

    std::uint32_t get_weight() const { return m_weight; };

};

Vehicle::Vehicle(/* args */) : m_weight(0) {}
Vehicle::Vehicle(std::uint32_t weight ) : m_weight(weight){}

class Car : public Vehicle
{
private:
    std::uint32_t m_num_doors;
public:
    Car(/* args */);
    Car(std::uint32_t number_of_doors): m_num_doors(number_of_doors) {}
    ~Car() = default;

    /*Excersice 3*/
    // void honk_horn() const { std::cout << "meep meep" << std::endl; };
    // void open_engine_hood() { std::cout << "front latch release" << std::endl; };

    virtual void honk_horn() const { std::cout << "meep meep" << std::endl; };
    virtual void open_engine_hood() { std::cout << "front latch release" << std::endl; };
};

Car::Car(/* args */) : m_num_doors(4), Vehicle(2000) {}

class SportsCar : public Car
{
private:
    std::uint32_t m_cylinder_number;
public:
    SportsCar(/* args */) : m_cylinder_number(6), Car(2) {};
    SportsCar(std::uint32_t cylinder_number) : m_cylinder_number(cylinder_number), Car(2) {};
    void honk_horn() const { std::cout << "yew-haw" << std::endl; };
    void open_engine_hood() { std::cout << "rear latch release" << std::endl; };
    ~SportsCar() = default;
};



class Bus : public Vehicle
{
private:
    bool stop_requested;

public:
    Bus(/* args */);
    ~Bus() = default;

    bool is_stop_requested() const { return stop_requested; };

    void honk_horn() const { std::cout << "honk honk" << std::endl; };
    void open_engine_hood() { std::cout << "rear latch release" << std::endl; };
    
};

Bus::Bus(/* args */) : 
stop_requested(false),
Vehicle(10000)
{
}


int main(int argc, char const *argv[])
{
    Bus my_bus;
    /*Excersice 2*/
    //Car my_car;
    SportsCar my_car;

    std::cout << "Get sub class's function" << std::endl;
    std::cout << my_bus.is_stop_requested() << std::endl;
    my_car.honk_horn();

    std::cout << "Get Super Class's Variables" << std::endl;
    std::cout << my_bus.get_weight() << std::endl;
    std::cout << my_car.get_weight() << std::endl;

    return 0;
}
