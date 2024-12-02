/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 21:54:40 by eltouma           #+#    #+#             */
/*   Updated: 2024/11/28 19:31:29 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <cstdlib>

template <typename T>
class	Array
{
	T *_arr;
	unsigned int _n;

public:
	Array(void);
	Array(unsigned int n);
	~Array(void);
	Array(const Array &obj);
	Array& operator=(const Array &rhs);
	T& operator[](unsigned int size);
	int	size(void);
};

#include "Array.tpp"
