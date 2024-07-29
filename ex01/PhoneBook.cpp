/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lglauch <lglauch@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 16:32:34 by lglauch           #+#    #+#             */
/*   Updated: 2024/07/29 15:09:28 by lglauch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

PhoneBook::PhoneBook()
{
	index = 0;
	return;
}

PhoneBook::~PhoneBook()
{
	return;
}

void	PhoneBook::add_contact(Contact contact)
{
	bool counter = false;

	contacts[index % 8] = contact;
	if (counter == true)
		index++;
	if (index < 8)
		index++;
	if (index == 8)
		counter = true;
}

std::string	PhoneBook::print_rows(std::string str)
{
	std::string tmp;

	if (str.length() <= 10)
		return (str);
	else
	{
		for (int i = 0; i < 9; i++)
			tmp += str[i];
		tmp += '.';
		return (tmp);
	}
}

void	PhoneBook::search_contact()
{
	// int index_number;
	// int tmp_index = index;
	int i = 0;

	std::cout <<               "--------------------------------------------" << std::endl;
	std::cout << std::right << "     Index|First Name| Last Name|  Nickname" << std::endl;
	while (i < index && i < 8)
	{
		std::cout <<               "--------------------------------------------" << std::endl;
		std::cout << std::setw(10) << i << "|" << std::setw(10) << print_rows(contacts[i].get_firstname()) << "|" << std::setw(10) << print_rows(contacts[i].get_lastname()) << "|" << std::setw(10) << print_rows(contacts[i].get_nickname()) << std::endl;
		i++;
	}
	// std::cout << "Please enter index for specific contact: ";
	// std::cin >> index_number;
	// while (index_number)
	// {
	// 	if (isdigit(index_number))
	// 		continue ;
	// 	else
	// 	{
	// 		std::cout << "Please enter a valid index!" << std::endl;
	// 		std::cout << "Index: ";
	// 		std::cin >> index_number;
	// 	}
	// 	if (index_number > index || index_number < 0)
	// 	{
	// 		std::cout << "Please enter a valid index!" << std::endl;
	// 		std::cout << "Index: ";
	// 		std::cin >> index_number;
	// 	}
	// }
}
