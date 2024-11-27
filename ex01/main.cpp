/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 21:17:03 by eltouma           #+#    #+#             */
/*   Updated: 2024/11/27 21:53:26 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <cctype>
#include <string>

template <class T>
void	print(T& nb)
{
	std::cout << nb << std::endl;
	return ;
}

template <class T>
void	toUpper(T& str)
{
	size_t size;

	size = str.length();
	for (size_t i = 0; i < size; i++)
		std::cout << static_cast<char>(toupper(str[i]));
	std::cout << std::endl;
	return ;
}

int	main(void)
{
	int	array[] = {0, 2, 3, 4};
	int	array2[] = {};

	std::string tab[] = {"hello", "world"};
	const char *tab2[] = {"hello", "world"};

	iter(array, 4, print<int>);
	iter(array2, 0, print<const int>);
	iter(tab, 2, print<std::string>);
	iter(tab2, 2, print<const char *>);
	iter(tab, 2, toUpper<std::string>);
}
