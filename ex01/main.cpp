#include "iter.hpp"

void    ft(const int& n)
{
    std::cout<<n<<std::endl;
}

void    ft(const std::string& str)
{
    std::cout<<str<<std::endl;
}

int main()
{
    int tab[] = {1,2,3};
    iter(tab, sizeof(tab) / sizeof(int), ft);

    std::cout<<"---------------"<<std::endl;

    std::string strings[] = {"elkamal", "mohammed", "101"};
    iter(strings, sizeof(strings) / sizeof(std::string), ft);
}