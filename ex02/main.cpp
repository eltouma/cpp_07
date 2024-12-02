/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 19:42:44 by eltouma           #+#    #+#             */
/*   Updated: 2024/11/28 19:42:47 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include "Array.tpp"

#define MAX_VAL 10

void	verif(Array<int>& arr, int i, int val)
{
	try {
		arr[i] = val;
		std::cout << "arr[" << i << "]:\t" << val << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

int	main(int, char**)
{
	Array<int> nb;
	Array<int> numbers(MAX_VAL);
	int* mirror = new int[MAX_VAL];

	srand(time(NULL));
	for (int i = 0; i < MAX_VAL; i++)
	{
		const int value = rand();
		numbers[i] = value;
		mirror[i] = value;
	}
	Array<int> tmp = numbers;
	Array<int> test(tmp);
	std::cout << "Tmp size:\t" << tmp.size() << std::endl;
	std::cout << "Test size:\t" << test.size() << std::endl;
	for (int i = 0; i < MAX_VAL; i++)
	{
		if (mirror[i] != numbers[i])
		{
			std::cerr << "didn't save the same value" << std::endl;
			return 1;
		}
	}
	verif(numbers, -2, 0);
	verif(numbers, 110, 24);
	verif(numbers, 3, 48);
	verif(numbers, MAX_VAL, 2);
	verif(numbers, MAX_VAL - 1, 27);
	for (int i = 0; i < MAX_VAL; i++)
	{
		numbers[i] = rand();
		std::cerr << numbers[i] << '\n';
	}
	delete [] mirror;
	return 0;
}
