#ifndef WHATEVER_HPP
#define WHATEVER_HPP

template <typename T>
void    swap(T& a, T& b)
{
    T   tmp;

    tmp = a;
    a = b;
    b = tmp;
}

template <typename V>
V&   min(V& a, V& b)
{
    if (a < b)
        return (a);
    return (b);
}

template <typename B>
B&   max(B& a, B& b)
{
    if (a > b)
        return (a);
    return (b);
}

#endif