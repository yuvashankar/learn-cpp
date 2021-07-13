#include <iostream>

class SimpleCircle
{
private:
    std::uint32_t itsRadius;
public:
    SimpleCircle(/* args */);

    //Exercise 3
    SimpleCircle(std::uint32_t custom_radius);
    ~SimpleCircle();
    std::uint32_t get_radius() const {return itsRadius;};

    
    //Exercise 4
    const SimpleCircle& operator++();
    const SimpleCircle operator++(int);
};

SimpleCircle::SimpleCircle(/* args */): itsRadius(5)
{
}

SimpleCircle::SimpleCircle(std::uint32_t custom_radius) : itsRadius(custom_radius)
{
    // this->itsRadius = custom_radius;
}

//Exercise 4 Increment the radius and then assign it to a variable
const SimpleCircle& SimpleCircle::operator++()
{
    ++itsRadius;
    return *this;
}
//Exercise 4 postfix
const SimpleCircle SimpleCircle::operator++(int)
{
    
    //First, store our object into an temp variable. 
    SimpleCircle temp(*this);

    //Imcrement the temp variable's member value
    ++itsRadius;

    //Return the temp variable by value, because temp will be destroyed after the function is done.
    return temp;
}

SimpleCircle::~SimpleCircle()
{
}

int main(int argc, char const *argv[])
{
    SimpleCircle round, iterated_object, postfix_iterated_object;
    //Exercise 2
    std::uint32_t my_int = round.get_radius();
    std::cout << "Exercise 2: default value of Simple Circle: " << my_int << std::endl;

    //Exercise 3
    SimpleCircle custom_round(14);
    std::cout << "Exercise 3: Custom value of Simple Circle: " << custom_round.get_radius() << std::endl;
    
    //Exercise 4 (cont) Postfix custom_round's value is 16, but iterated_object's is only 15. 
    postfix_iterated_object = custom_round++;
    std::cout << "Exercise 4: postfix_iterated raidus: " << postfix_iterated_object.get_radius() << std::endl;
    std::cout << "postfix custom_round: " << custom_round.get_radius() <<std::endl;
    
    //Exercise 4: Prefix custom_round's value is 15, so is iterated_object. 
    iterated_object = ++custom_round;
    std::cout << "Exercise 4: customRound_iterated: " << iterated_object.get_radius() << std::endl;
    std::cout << "prefix custom_round: " << custom_round.get_radius() << std::endl;

    





    return 0;
}

