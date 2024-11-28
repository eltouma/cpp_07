/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 21:17:03 by eltouma           #+#    #+#             */
/*   Updated: 2024/11/28 16:56:55 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <cctype>
#include <string>

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

template <class T>
void	print(T& nb)
{
	std::cout << nb << " ";
	return ;
}

template <class T>
void	multiply(T& nb)
{
	std::cout << nb * 3 << " ";
	return ;
}

template <class T>
void	toUpper(T& str)
{
	size_t size;

	size = str.length();
	for (size_t i = 0; i < size; i++)
		std::cout << static_cast<char>(toupper(str[i]));
	return ;
}

int	main(void)
{
	int	array[] = {0, 1, 2, 3, 4};
	const float	constArray[] = {27.2, 91.24, 21.5, 12.8, 6.9, 14.5, 22.8};
	int	emptyArray[] = {};

	std::string roiLoth[] = {"Vous etes chevalier je suis roi...", "Je vous demande de venir,", "vous venez et puis c'est tout"};
	const char *leodagan[] = {"Moi j'ai apppris a lire,", "ben je souaite ça personne"};

	draw_tab("Print function");
	iter(array, 4, print<int>);
	std::cout << std::endl;
	iter(constArray, 7, print<const float>);
	std::cout << std::endl;
	iter(emptyArray, 0, print<const int>);
	std::cout << std::endl;
	iter(roiLoth, 3, print<std::string>);
	std::cout << std::endl;
	iter(leodagan, 2, print<const char *>);
	std::cout << std::endl << std::endl;

	draw_tab("Multiply function");
	iter(array, 5, multiply<int>);
	std::cout << std::endl;
	iter(emptyArray, 0, multiply<int>);
	iter(constArray, 7, multiply<const float>);
	std::cout << std::endl << std::endl;

	draw_tab("toUpper function");
	iter(roiLoth, 3, toUpper<std::string>);
	std::cout << std::endl;
}
