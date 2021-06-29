//program that creates a memory leak

#include <iostream>

int main(int argc, char const *argv[])
{
    std::uint32_t my_int = 420;
    std::uint32_t *my_heap_int = new std::uint32_t (240);
    
    std::cout << "my int:" << my_int << "\t my_heap_int" << *my_heap_int << std::endl;
    
    //don't delete the item
    //e_7 delete my_heap_int;

    delete my_heap_int;
    return 0;
}
