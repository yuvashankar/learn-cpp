#include <iostream>
using namespace std;
class Animal;
void setValue(Animal &, int);
void setValue(Animal &, int, int);
class Animal
{
    friend void setValue(Animal &, int); // here’s the change!
    friend void setValue(Animal &, int, int);
    
private:
    
    int itsWeight;
    int itsAge;
};
void setValue(Animal &theAnimal, int theWeight)
{
    theAnimal.itsWeight = theWeight;
}
void setValue(Animal &theAnimal, int theWeight, int theAge)
{
    theAnimal.itsWeight = theWeight;
    theAnimal.itsAge = theAge;
}
int main()
{
    Animal peppy;
    setValue(peppy, 5);
    setValue(peppy, 7, 9);
    return 0;
}