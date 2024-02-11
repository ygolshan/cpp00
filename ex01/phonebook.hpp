/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygolshan <ygolshan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 17:02:30 by ygolshan          #+#    #+#             */
/*   Updated: 2023/11/08 15:11:28 by ygolshan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <array>

class contact
{
    private:
        std::string firstname;
        std::string lastname;
        std::string nickname;
        std::string darkestsecret;
        std::string phonenumber;
    
    public:
        contact();
        ~contact();
        void        setter();
        std::string get_firstname();
        std::string get_lastname();
        std::string get_nickname();
        std::string get_phonenumber();
        std::string get_darkestsecret();
        
        
};
class phoneBook
{
private:
    contact _contact[8];
    int             flag;
    
    public:
    phoneBook(void);
    ~phoneBook(void);
    void            set_first(int i);
    void            get_number(int i,std::string indexStr);
    void            Add(int &i);
    std::string     lens(std::string name);

    
};
void        empty(std::string &x);
#endif