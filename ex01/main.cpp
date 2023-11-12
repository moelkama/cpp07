// #include "iter.hpp"
#include <iostream>

template <typename T>
void   iter(T *tab, size_t size, void ft(T &))
{
    for (size_t i = 0; i < size; i++)
        ft(tab[i]);
}

template <typename T>
void    print(T const & x){std::cout<<x<<std::endl;}

int main(void)
{
    const int tab[] = {0, 1, 2, 3, 4 ,5};

    iter(tab, 5, print);
}

// void    ft(const int& n)
// {
//     std::cout<<n<<std::endl;
// }

// void    ft(const std::string& str)
// {
//     std::cout<<str<<std::endl;
// }

// int main()
// {
//     int tab[] = {1,2,3};
//     iter<int>(tab, sizeof(tab) / sizeof(int), ft);

//     std::cout<<"---------------"<<std::endl;

//     std::string strings[] = {"elkamal", "mohammed", "101"};
//     iter<std::string>(strings, sizeof(strings) / sizeof(std::string), ft);
// }