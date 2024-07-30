/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lglauch <lglauch@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 12:25:26 by leo               #+#    #+#             */
/*   Updated: 2024/07/30 15:51:37 by lglauch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
    return;
}

Contact::~Contact()
{
    return;
}

void    Contact::fill(void)
{
	std::cin.ignore();
	while (1)
	{
 		std::cout << "First Name: ";
		std::getline(std::cin, first_name);
		bool isSpaceTab = true;
		for (long unsigned int i = 0; i < first_name.length(); i++)
		{
			if (first_name[i] != ' ' && first_name[i] != '\t')
			{
				isSpaceTab = false;
				break;
			}
		}
		if (!isSpaceTab)
			break ;
	}

	while (1)
	{
		std::cout << "Last Name: ";
  		std::getline(std::cin, last_name);
		bool isSpaceTab = true;
		for (long unsigned int i = 0; i < last_name.length(); i++)
		{
			if (last_name[i] != ' ' && last_name[i] != '\t')
			{
				isSpaceTab = false;
				break;
			}
		}
		if (!isSpaceTab)
			break ;
	}

	while (1)
	{
	std::cout << "Nickname: ";
    std::getline(std::cin, nickname);
	bool isSpaceTab = true;
		for (long unsigned int i = 0; i < nickname.length(); i++)
		{
			if (nickname[i] != ' ' && nickname[i] != '\t')
			{
				isSpaceTab = false;
				break;
			}
		}
		if (!isSpaceTab)
			break ;
	}

	while (true)
	{
	std::cout << "Phonenumber: ";
    std::getline(std::cin, phone_number);
	bool isValid = !phone_number.empty();
	for (long unsigned int i = 0; i < phone_number.length(); i++)
		{
			if (!(isdigit(phone_number[i])))
			{
				isValid = false;
				std::cout << "Please enter a valid phone number" << std::endl;
				break ;
			}
		}
		if (isValid)
			break ;
	}

	while (1)
	{
		std::cout << "Darkest Secret: ";
		std::getline(std::cin, darkest_secret);
		bool isSpaceTab = true;
		for (long unsigned int i = 0; i < darkest_secret.length(); i++)
		{
			if (darkest_secret[i] != ' ' && darkest_secret[i] != '\t')
			{
				isSpaceTab = false;
				break;
			}
		}
		if (!isSpaceTab)
			break ;
	}
}

	std::string	Contact::get_firstname()
	{
		return (first_name);
	}
	
	std::string Contact::get_lastname()
	{
		return (last_name);
	}
	
	std::string Contact::get_nickname()
	{
		return (nickname);
	}
	
	std::string Contact::get_phone_number()
	{
		return (phone_number);
	}

	std::string Contact::get_darkestsecret()
	{
		return (darkest_secret);
	}