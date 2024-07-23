/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leo <leo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 15:16:07 by lglauch           #+#    #+#             */
/*   Updated: 2024/07/23 18:48:00 by leo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <cstdlib>

void	addcontact(void)
{
	Contact newcontact;
	PhoneBook book;
	std::string tmp;

	newcontact.fill();
	book.add_contact(newcontact);
	std::cout << newcontact.get_darkestsecret << std::endl;
}

int	main(int argc, char **argv)
{
	std::string user;
	std::string	tmp;
	PhoneBook book;

	user = getenv("USER");
	(void)argv;
	if (argc > 1)
		std::cout << "Nice try, try again!" << std::endl;
	if (argc == 1)
	{
		std::cout << "Welcome " << user << " to your Phonebook" << std::endl;
		std::cout << "Use \033[1mADD\033[0m: save a new contact" << std::endl << "Use \033[1mSEARCH\033[0m: display a specific contact" << std::endl << "Use \033[1mEXIT\033[0m: quits the program and your contacts will be lost :(\n\n" << std::endl;
		while (1)
		{
			std::cout << "📞📖 ";
			if (!(std::cin >> tmp))
				{
					std::cout << "\nExiting program..." << std::endl;
					exit (0);
				}
			else if (tmp == "ADD")
			{
				addcontact();
				std::cout << "\033\n[32mContact added successfully\n\033[0m" << std::endl;
				std::cout << "Use \033[1mADD\033[0m: save a new contact" << std::endl << "Use \033[1mSEARCH\033[0m: display a specific contact" << std::endl << "Use \033[1mEXIT\033[0m: quits the program and your contacts will be lost :(\n\n" << std::endl;
			}
			else if (tmp == "SEARCH")
			{
				book.search_contact();
				std::cout << "Use \033[1mADD\033[0m: save a new contact" << std::endl << "Use \033[1mSEARCH\033[0m: display a specific contact" << std::endl << "Use \033[1mEXIT\033[0m: quits the program and your contacts will be lost :(\n\n" << std::endl;
			}
			else if (tmp == "EXIT")
				return (0);
			else
			std::cout << "Invalid command [ADD, SEARCH, EXIT]" << std::endl;
		}
	}
	return (0);
}