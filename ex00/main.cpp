/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 13:00:52 by eltouma           #+#    #+#             */
/*   Updated: 2024/11/27 20:28:28 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

void	draw_tab(const std::string& str)
{
	const int frame_width = 25;
	int padding = frame_width - static_cast<int>(str.length());
	int left_padding = padding / 2;
	int right_padding = padding - left_padding;

	std::cout << "\u250c";
	for (int i = 0; i < frame_width; i++)
		std::cout << "\u2500";
	std::cout << "\u2510\n";
	std::cout << "\u2502";
	for (int i = 0; i < left_padding; i++)
		std::cout << " ";
	std::cout << str;
	for (int i = 0; i < right_padding; i++)
		std::cout << " ";
	std::cout << "\u2502\n";
	std::cout << "\u2514";
	for (int i = 0; i < frame_width; i++)
		std::cout << "\u2500";
	std::cout << "\u2518\n";
}

int	parsing(std::string s)
{
	size_t	size;
	int	comma;

	size = s.length();
	comma = 0;

	for (size_t i = 0; i < size; i++)
	{
		if (s[i] == '-')
		{
			if (i != 0)
				return (1);
		}
		else if (s[i] == '.')
		{
			comma += 1;
			if (comma > 1)
				return (1);
		}
		else if (s[i] == 'f')
		{
			if (i != size - 1)
				return (1);
		}
		else if (!isdigit(s[i]))
			return (1);
	}
	return (0);
}

int	main(int argc, char **argv)
{
	float	a;
	float	b;
	char	*endptr;
	std::string	str1;
	std::string	str2;

	if (argc != 5)
	{
		std::cerr << "Wrong number of argument. Please enter 5 parameters: 2 digits and 2 strings" << std::endl;
		return (1);
	}
	if (parsing(argv[1]) || parsing(argv[2]))
	{
		std::cerr << "Invalid arguments" << std::endl;
		return (1);
	}
	a = strtof(argv[1], &endptr);
	b = strtof(argv[2], &endptr);
	str1 = argv[3];
	str2 = argv[4];
	draw_tab("Test with int");
	std::cout << "min: " << ::min(static_cast<int>(a), static_cast<int>(b)) << std::endl;
	std::cout << "max: " << ::max(static_cast<int>(a), static_cast<int>(b)) << std::endl;
	std::cout << "Initial values:\t\ta: " << static_cast<int>(a) << ";\t\tb: " << static_cast<int>(b) << std::endl;
	::swap(a, b);
	std::cout << "Swaped values:\t\ta: " << static_cast<int>(a) << ";\t\tb: " << static_cast<int>(b) << std::endl << std::endl;

	draw_tab("Test with str");
	std::cout << "min: " << ::min(str1, str2) << std::endl;
	std::cout << "max: " << ::max(str1, str2) << std::endl;
	std::cout << "Initial values:\t\tstr1: " << str1 << ";\t\tstr2: " << str2 << std::endl;
	::swap(str1, str2);
	std::cout << "Swaped values:\t\tstr1: " << str1 << ";\t\tstr2: " << str2 << std::endl << std::endl;

	draw_tab("Test with float");
	std::cout << "min: " << ::min(a, b) << std::endl;
	std::cout << "max: " << ::max(a, b) << std::endl;
	std::cout << "Initial values:\t\ta: " << a << ";\t\tb: " << b << std::endl;
	::swap(a, b);
	std::cout << "Swaped values:\t\ta: " << a << ";\t\tb: " << b << std::endl << std::endl;
	return (0);
}
