/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 21:54:40 by eltouma           #+#    #+#             */
/*   Updated: 2024/11/27 23:51:49 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
//#include "Array.tpp"

template <typename T>
class	Array
{
	T *_arr;
	unsigned int _n;

public:
	Array(void) : _arr(new T[0]), _n(0) {}
	//Array(void);
	Array(unsigned int n) : _arr(new T[n]), _n(n) {}
	~Array(void) { delete[] this->_arr; }
	Array(const Array &obj)
	{
		this->_arr = new T[0];
		*this = obj;
	}
	Array& operator=(const Array &rhs)
	{ 
		if (this != &rhs)
		{
			this->_n = rhs._n;
			delete [] this->_arr;
			this->_arr = new T[_n];
		}
		return (*this);
	}
	T& operator[](unsigned int size)
	{
		if (size > this->_n)
			throw std::out_of_range("Out of range");
		return (this->_arr[size]);
	}

	int	size(void)
	{
		return _n;
	}
};
