/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lglauch <lglauch@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 12:25:26 by leo               #+#    #+#             */
/*   Updated: 2024/07/24 14:16:04 by lglauch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <cctype>

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
    std::cout << "First Name: ";
    std::cin >> first_name;

	std::cout << "Last Name: ";
    std::cin >> last_name;

	std::cout << "Nickname: ";
    std::cin >> nickname;

	std::cout << "Phonenumber: ";
    std::cin >> phone_number;
	int i = 0;
	while (phone_number[i])
	{
		if (isdigit(phone_number[i]))
			i++;
		else
		{
			i = 0;
			std::cout << "Please enter a valid phone number!" << std::endl;
			std::cout << "Phonenumber: ";
			std::cin >> phone_number;
		}
	}
	std::cout << "Darkest Secret: ";
    std::cin >> darkest_secret;
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