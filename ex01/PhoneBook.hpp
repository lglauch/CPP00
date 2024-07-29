/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lglauch <lglauch@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 16:32:53 by lglauch           #+#    #+#             */
/*   Updated: 2024/07/29 13:49:58 by lglauch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include <iostream>
#include "Contact.hpp"
#include <iomanip>

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