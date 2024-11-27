/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 13:00:52 by eltouma           #+#    #+#             */
/*   Updated: 2024/11/27 14:17:15 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int	main(int argc, char **argv)
{
	(void)argv;
	if (argc != 3)
	{
		std::cerr << "Wrong number of argument. Please enter 2 parameters" << std::endl;
		return (1);
	}
	return (0);
}
