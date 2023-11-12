#include "Array.hpp"

template <typename T>
Array::Array()
{
    this->array = NULL;
}

template <typename T>
Array::~Array()
{
    std::cout<<"Destructor called"<<std::endl;
    delete array;
}

Array::Array(unsigned int n)
{
    this->array = new T[n];
    if (!this->array)
        throw std::bad_alloc();
    for (unsigned i = 0; i < n; i++)
        this->array[i] = T();
    this->si_ze = n;
}

Array::Array(const Array& other)
{
    this->array = NULL;
    *this = other;
}

Array& Array::operator=(const Array& other)
{
    delete this->array;
    this->si_ze = other.si_ze;
    this->array = new T[this->si_ze];
    for (unsigned int i = 0; i < this->si_ze; i++)
        this->array[i] = other.array[i];
    return (*this);
}

T&  Array::operator[](long i)
{
    if (i < 0 || i >= si_ze)
        throw std::exception();
    return (this->array[i]);
}