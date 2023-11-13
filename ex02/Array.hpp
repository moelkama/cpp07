#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <exception>

template <typename T>
class Array
{
private:
    T               *array;
    unsigned int    si_ze;
public:
    Array()
    {
        this->si_ze = 0;
        this->array = NULL;
    }
    Array(unsigned int n)
    {
        this->array = new T[n];
        if (!this->array)
            throw std::bad_alloc();
        this->si_ze = n;
    }
    Array(const Array& other)
    {
        this->array = NULL;
        *this = other;
    }
    Array& operator=(const Array& other)
    {
        delete this->array;
        this->si_ze = other.si_ze;
        this->array = new T[this->si_ze];
        for (unsigned int i = 0; i < this->si_ze; i++)
            this->array[i] = other.array[i];
        return (*this);
    }
    ~Array()
    {
        std::cout<<"Destructor called"<<std::endl;
        delete array;
    }
    T&  operator[](long i)
    {
        if (i < 0 || i >= si_ze)
            throw std::exception();
        return (this->array[i]);
    }
    const T&  operator[](long i) const
    {
        if (i < 0 || i >= si_ze)
            throw std::exception();
        return (this->array[i]);
    }
    unsigned int size() const
    {
        return (this->si_ze);
    }
};

#endif