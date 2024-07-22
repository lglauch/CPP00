/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lglauch <lglauch@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 15:16:07 by lglauch           #+#    #+#             */
/*   Updated: 2024/07/22 16:45:26 by lglauch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

int	main(int argc, char **argv)
{
	std::string user;
	std::string	tmp;
	PhoneBook book;
	Contact	contact;
	int		index = 0;

	user = getenv("USER");
	(void)argv;
	if (argc > 1)
		std::cout << "Nice try, try again!" << std::endl;
	if (argc == 1)
	{
		std::cout << "Welcome " << user << " to your Phonebook" << std::endl;
		std::cout << "Use \033[1mADD\033[0m: save a new contact" << std::endl << "Use \033[1mSEARCH\033[0m: display a specific contact" << std::endl << "Use \033[1mEXIT\033[0m: quits the program and your contacts will be lost :(" << std::endl;
		std::cout << "Please enter a valid command\n" << std::endl;
		while (1)
		{
			std::cin >> tmp;
			if (tmp == "ADD")
			{
				index = book.add_contact(index);
			}
			else if (tmp == "SEARCH")
			{
				
			}
			else if (tmp == "EXIT")
				return (0);
			else
			std::cout << "Invalid command [ADD, SEARCH, EXIT]" << std::endl;
		}
	}
	return (0);
}