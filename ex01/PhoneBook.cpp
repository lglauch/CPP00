/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lglauch <lglauch@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 16:32:34 by lglauch           #+#    #+#             */
/*   Updated: 2024/07/24 15:03:56 by lglauch          ###   ########.fr       */
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
	if (index < 8)
	{
		contacts[index] = contact;
		index++;
	}
	else if (index == 8)
	{
		index = 0;
		contacts[index] = contact;
	}
	std::cout << "Index: " << index << std::endl;
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

void	PhoneBook::search_contact(Contact con)
{
	con.get_darkestsecret(); //delete later
	std::cout <<               "--------------------------------------------" << std::endl;
	std::cout << std::right << "     Index|First Name| Last Name|  Nickname" << std::endl;
	if (index == 7)
		index = 0;
	while (index && index <= 7)
	{
		std::cout <<               "--------------------------------------------" << std::endl;
		std::cout << std::setw(10) << index - 1 << "|" << std::setw(10) << print_rows(contacts[index].get_firstname()) << "|" << std::setw(10) << print_rows(contacts[index].get_lastname()) << "|" << std::setw(10) << print_rows(contacts[index].get_nickname()) << std::endl;
		index++;
	}
}
