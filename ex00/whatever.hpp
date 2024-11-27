/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 13:22:42 by eltouma           #+#    #+#             */
/*   Updated: 2024/11/27 14:16:53 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template <class T>
void	swap(T &a, T &b)
{
	T	tmp;

	tmp = a;
	a = b;
	b = tmp;	
}

template <class T>
T	min(T a, T b)
{
	T result;

	return (result = a < b ? a : b);
}

template <class T>
T	max(T a, T b)
{
	T result;

	return (result = a > b ? a : b);
}
