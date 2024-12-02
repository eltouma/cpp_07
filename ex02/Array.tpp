#pragma once
#include "Array.hpp"

template <typename T>
Array<T>::Array(void) : _arr(new T[0]), _n(0)
{
} 

template <typename T>
Array<T>::~Array(void)
{
	delete[] this->_arr;
} 

template <typename T>
Array<T>::Array(unsigned int n) : _arr(new T[n]), _n(n)
{
}

template <typename T>
Array<T>::Array(const Array &obj)
{
	this->_arr = new T[0];
	*this = obj;
}

template <typename T>
Array<T>& Array<T>::operator=(const Array &rhs)
{
	if (this != &rhs)
	{
		this->_n = rhs._n;
		delete [] this->_arr;
		this->_arr = new T[_n];
	}
	return (*this);
}

template <typename T>
T& Array<T>::operator[](unsigned int size)
{
	if (size >= this->_n)
		throw std::out_of_range("Out of range");
	return (this->_arr[size]);
}

template <typename T>
int	Array<T>::size(void)
{
	return _n;
}
