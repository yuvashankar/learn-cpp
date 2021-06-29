#include <iostream>



class CAT
{
private:
    std::uint32_t itsAge;
public:
    CAT(std::uint32_t age);
    std::uint32_t GetAge() const { return itsAge; };
    ~CAT();

};

CAT::CAT(std::uint32_t age)
{
    itsAge = age;
}

CAT::~CAT()
{
}

CAT *MakeCat(std::uint32_t theAge);

int main(int argc, char const *argv[])
{
    std::uint32_t age = 7;
    CAT *myCat = MakeCat(age);
    std::cout << "Cat's Age: " << myCat->GetAge() << std::endl;
    delete myCat;
    return 0;
}

CAT *MakeCat(std::uint32_t theAge)
{
    return new CAT(theAge);
}