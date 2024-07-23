/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leo <leo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 16:32:34 by lglauch           #+#    #+#             */
/*   Updated: 2024/07/23 18:45:27 by leo              ###   ########.fr       */
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

void	PhoneBook::search_contact(void)
{
	std::cout <<               "-----------------------------------------" << std::endl;
	std::cout << std::right << "     Index|First Name| Last Name|  Nickname" << std::endl;
	std::cout <<               "-----------------------------------------" << std::endl;
	std::cout << std::right << index << print_rows(contacts[index].get_firstname()) << "|" << print_rows(contacts[index].get_lastname()) << "|" << print_rows(contacts[index].get_nickname()) << std::endl;
}
