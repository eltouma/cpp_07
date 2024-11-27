/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 20:54:05 by eltouma           #+#    #+#             */
/*   Updated: 2024/11/27 21:34:26 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <class T>
void	iter(T *array, size_t size, void (*f)(T&))
{
	for (size_t i = 0; i < size; i++)
		f(array[i]);
}

template <class T>
void	iter(T *array, size_t size, void (*f)(const T&))
{
	for (size_t i = 0; i < size; i++)
		f(array[i]);
}

/*
Test with third param instantiated

template <class T, class F>
void	iter(T *array, size_t size, F f)
{
	for (size_t i = 0; i < size; i++)
		f(array[i]);
}
*/
