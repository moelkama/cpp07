#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T>
void   iter(T *tab, size_t size, void ft(T const &))
{
    for (size_t i = 0; i < size; i++)
        ft(tab[i]);
}

#endif