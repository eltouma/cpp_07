/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 21:58:12 by eltouma           #+#    #+#             */
/*   Updated: 2024/11/27 23:52:02 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
//#include "Array.tpp"

int	main(void)
{
	try {
		Array <int>arr;
		Array <int>arr2;
		std::cout << "size: " << arr.size() << std::endl;
		Array <int>arr3(15);
		std::cout << "size arr3: " << arr3.size() << std::endl;

		arr2 = arr;
		arr3[5] = 25;
		int	*a = new int();
		std::cout << "Address of a: " << a << std::endl;
		try {
			std::cout << "arr3[5] " << arr3[5] << std::endl;
		}
		catch (std::out_of_range &ofr)
		{
			delete (a);
			std::cerr << ofr.what() << std::endl;
			return (1);
		}
		delete (a);
	}
	catch (std::bad_alloc &ba)
	{
		std::cerr << ba.what() << std::endl;
		return (1);
	}

}
