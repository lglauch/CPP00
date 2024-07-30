/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lglauch <lglauch@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 16:32:34 by lglauch           #+#    #+#             */
/*   Updated: 2024/07/30 15:56:28 by lglauch          ###   ########.fr       */
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
	contacts[index % 8] = contact;
		index++;
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
	int index_number;
	bool checker = false;
	int i = 0;

	std::cout <<               "--------------------------------------------" << std::endl;
	std::cout << std::right << "     Index|First Name| Last Name|  Nickname" << std::endl;
	while (i < index && i < 8)
	{
		std::cout <<               "--------------------------------------------" << std::endl;
		std::cout << std::setw(10) << i << "|" << std::setw(10) << print_rows(contacts[i].get_firstname()) << "|" << std::setw(10) << print_rows(contacts[i].get_lastname()) << "|" << std::setw(10) << print_rows(contacts[i].get_nickname()) << std::endl;
		std::cout <<               "--------------------------------------------" << std::endl;
		i++;
	}
	std::cout << std::endl;
	std::cout << "Please enter an index for a specific contact or 9 to exit: ";
	while (1)
	{
		std::cin >> index_number;
		if (index_number == 9)
		{
			checker = true;
			break ;
		}
		if (std::cin.fail() || index_number < 0 || index_number >= index)
		{
			std::cin.clear();
			std::cin.ignore();
			std::cout << "Please enter a valid index!" << std::endl;
			std::cout << "Please enter index for specific contact: ";
		}
		else
			break ;
	}
	if (checker == false)
	{
	std::cout << std::endl;
	std::cout << "\033[1mContact Index " << index_number << "\033[0m" << std::endl;
	std::cout << "First Name: " << contacts[index_number].get_firstname() << std::endl;
	std::cout << "Last Name: " << contacts[index_number].get_lastname() << std::endl;
	std::cout << "Nickname: " << contacts[index_number].get_nickname() << std::endl;
	std::cout << "Phonenumber: " << contacts[index_number].get_phone_number() << std::endl;
	std::cout << "Darkest Secret: " << contacts[index_number].get_darkestsecret() << std::endl;
	std::cout << std::endl;
	}
}
