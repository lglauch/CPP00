/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lglauch <lglauch@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 15:16:07 by lglauch           #+#    #+#             */
/*   Updated: 2024/07/29 14:08:07 by lglauch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <cstdlib>

void	addcontact(Contact &con, PhoneBook &book)
{
	con.fill();
	book.add_contact(con);
	if (!con.get_darkestsecret().empty())
	{
		std::cout << "\033\n[32mContact added successfully\n\033[0m" << std::endl;
	}
}

int	main(int argc, char **argv)
{
	std::string user;
	std::string	tmp;
	PhoneBook book;
	Contact	  con;

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
				addcontact(con, book);
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