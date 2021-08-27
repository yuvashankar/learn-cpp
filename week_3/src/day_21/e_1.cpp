#ifndef STRING_H
#define STRING_H "hi"
#endif

#include <iostream>
#define DEBUG 1
#ifndef DEBUG
#define ASSERT(x)
#elif DEBUG == 1
#define ASSERT(x) if(!(x)) {std::cout << "ERROR! Assert" << #x << " failed" << std::endl; }
#elif DEBUG == 2
#define ASSERT(x) if(!(x)) {std::cout << "ERROR! Assert" << #x << "failed" << std::endl; \
                            std::cout << "on line " << __LINE__ << std::endl; \
                            std::cout << "in file " << __FILE__ << std::endl;}
#endif

#ifndef DEBUG
#define DPRINT(string)
#else
#define DPRINT(STRING) cout << #STRING;
#endif

class datetime
{
private:
    unsigned long Month : 4;
    unsigned long Day : 5;
    unsigned long Year: 12;
public:
    datetime(/* args */);
    ~datetime();
    
};

datetime::datetime(/* args */)
{
}

datetime::~datetime()
{
}


int main(int argc, char const *argv[])
{
    
    int x = 4;
    ASSERT(x == 5);

    return 0;
}
