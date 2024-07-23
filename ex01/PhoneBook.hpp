/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leo <leo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 16:32:53 by lglauch           #+#    #+#             */
/*   Updated: 2024/07/23 18:17:20 by leo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include <iostream>
#include "Contact.hpp"

class PhoneBook
{
	private:
	Contact contacts[8];
	int		index;

	public:
	PhoneBook();
	~PhoneBook();
	void	add_contact(Contact contact);
	void	search_contact(void);
	std::string	print_rows(std::string str);
};

#endif