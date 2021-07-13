#include <iostream>

class SimpleCircle
{
private:
    std::uint32_t* itsRadius;
public:
    SimpleCircle(/* args */);

    //Exercise 3
    SimpleCircle(std::uint32_t custom_radius);
    SimpleCircle(const SimpleCircle& rhs);
    ~SimpleCircle();
    std::uint32_t get_radius() const {return *itsRadius;};
    
    //Operator Overloads
    const SimpleCircle& operator++();
    const SimpleCircle operator++(int);
    SimpleCircle& operator=(const SimpleCircle& rhs);
};

SimpleCircle::SimpleCircle(/* args */): SimpleCircle(5)
{
    // itsRadius = new uint32_t (5)
    
}

SimpleCircle::SimpleCircle(std::uint32_t custom_radius)
{
    // this->itsRadius = custom_radius;
    itsRadius = new std::uint32_t (custom_radius);
}

const SimpleCircle& SimpleCircle::operator++()
{
    ++(*itsRadius);
    return *this;
}

const SimpleCircle SimpleCircle::operator++(int)
{
    SimpleCircle temp(*this);
    ++(*itsRadius);
    return temp;
}

//Exercise 6. Create a copy constructor
SimpleCircle::SimpleCircle(const SimpleCircle& rhs)
{
    itsRadius = new std::uint32_t;
    *itsRadius = rhs.get_radius();
}

//Exercise 7. Create an assignment constructor. 
SimpleCircle& SimpleCircle::operator=(const SimpleCircle& rhs)
{
    if (this == &rhs)
    {
        return *this;
    }
        
    
    *itsRadius = rhs.get_radius();
    return *this;
}

SimpleCircle::~SimpleCircle()
{
    std::cout << "Calling Destructor" << std::endl;
    delete itsRadius;
}

int main(int argc, char const *argv[])
{
    SimpleCircle round, iterated_object;
    //Exercise 2
    std::uint32_t my_int = round.get_radius();
    std::cout << "Exercise 2: default value of Simple Circle: " << my_int << std::endl;

    //Exercise 3
    SimpleCircle custom_round(14);
    std::cout << "Exercise 3: Custom value of Simple Circle: " << custom_round.get_radius() << std::endl;

    //Exercise 4
    iterated_object = ++custom_round; //this causes a memory leak when stored in the heap. 
    std::cout << "Exercise 4: customRound_iterated: " << iterated_object.get_radius() << std::endl;


    //Exercise 9
    SimpleCircle alpha;
    SimpleCircle beta(9);

    ++alpha;
    ++beta;
    std::cout << "alpha.radius: " << alpha.get_radius() << " beta.radius: " << beta.get_radius() << std::endl;
    
    std::cout << "Assigning Beta to Alpha" << std::endl;
    beta = alpha;
    std::cout << "alpha.radius: " << alpha.get_radius() << " beta.radius: " << beta.get_radius() << std::endl;

    return 0;
}

