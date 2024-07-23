/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leo <leo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 16:33:07 by lglauch           #+#    #+#             */
/*   Updated: 2024/07/23 18:24:54 by leo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
#define CONTACT_H


#include <iostream>

class Contact
{
	private:
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string	phone_number;
	std::string darkest_secret;

	public:
	Contact();
	~Contact();
	void fill();
	std::string	get_firstname();
	std::string get_lastname();
	std::string get_nickname();
	std::string get_phone_number();
	std::string get_darkestsecret();
};

#endif