/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygolshan <ygolshan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 15:02:09 by ygolshan          #+#    #+#             */
/*   Updated: 2023/11/09 15:32:22 by ygolshan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./phonebook.hpp"

phoneBook::phoneBook()
{
    flag = 0;
}

phoneBook::~phoneBook()
{
}

contact::contact()
{
}

contact::~contact()
{
}

void contact::setter()
{
    std::cout << "First   name   :" << std::endl;
    std::getline(std::cin, firstname);
    empty(firstname);
    std::cout << "Last    name   :" << std::endl;
    std::getline(std::cin, lastname);
    empty(lastname);
    std::cout << "nick    name   :" << std::endl;
    std::getline(std::cin, nickname);
    empty(nickname);
    std::cout << "phone   number :" << std::endl;
    std::getline(std::cin, phonenumber);
    empty(phonenumber);
    std::cout << "darkest secret :" << std::endl;
    std::getline(std::cin, darkestsecret);
    empty(darkestsecret);
    
}

void    empty(std::string &x)
{
    while (x.empty() || std::all_of(x.begin(), x.end(), ::isspace))
    {
        std::cout << "its empty please write it this fild again:" << std::endl;
        std::getline(std::cin, x);
    }
}

std::string contact::get_firstname()
{
    return(this->firstname);
}
std::string contact::get_lastname()
{
    return(this->lastname);
}
std::string contact::get_nickname()
{
    return(this->nickname);
}
std::string contact::get_phonenumber()
{
    return(this->phonenumber);
}
std::string contact::get_darkestsecret()
{
    return(this->darkestsecret);
}

void phoneBook::Add(int &i)
{
    if( i >= 8)
    {
        i = 0;
        flag = 1;  
    }
    _contact[i].setter();
}

std::string phoneBook::lens(std::string name)
{
    if(name.length() > 10)
     {
        name = name.substr(0 , 9);
        name.push_back('.');
    }
    else
    {
        while(name.length() < 10)
            name.push_back(' '); 
    }            
        return(name);
}

void  phoneBook::set_first(int i)
{
        if (flag == 0)
        {
            for (int j = 0; j < i; j++)
            {
                std::cout << j << "|" << lens(_contact[j].get_firstname()) << "|" << lens(_contact[j].get_lastname()) << "|" << lens(_contact[j].get_nickname());
                std::cout << std::endl;
            }
        }
        else
        {
            for (int j = 0; j < 8; j++)
            {
                std::cout << j << "|" << lens(_contact[j].get_firstname()) << "|" << lens(_contact[j].get_lastname()) << "|" << lens(_contact[j].get_nickname());
                std::cout << std::endl;
            }
        }  
}
    
void    phoneBook::get_number(int i, std::string indexStr)
{
        if (indexStr.length() < 3)
        {
            int K = std::stoi(indexStr);
            if (K >= 0 && K <= (i-1) )
            {
                std::cout << K << "|" << _contact[K].get_firstname() << "|" << _contact[K].get_lastname() << "|" << _contact[K].get_nickname()<< "|" << _contact[K].get_phonenumber()<< "|" << _contact[K].get_darkestsecret();
                std::cout << std::endl;
            }
            else
                std::cout<< "invalid index" << std::endl;
        }
        else
            std::cout<< "invalid index" << std::endl;
}
       
int main(int argc, char **argv)
{
    phoneBook x;
    std::string input;
    std::string search;
    // int k = 0;
    int i = 0;

            
            while (argc == 1 && argv)
            {
                while (true)
                {
                    if(input == "ADD")
                    { 
                        x.Add(i);
                        i++;
                        
                    }
                    if(input == "SEARCH")
                    {
                        x.set_first(i);
                        std::cout << "please inter index    :" << std::endl;
                        std::getline(std::cin, search);
                        empty(search);
                        x.get_number(i,search);
                    }
                    if(input == "EXIT")
                    {
                        std::cout << "Good Bye";
                        exit(0);
                    }
                    std::cout << std::endl << "you can choose one of command    :" << std::endl << "ADD | SEARCH | EXIT" << std::endl;
                    std::getline(std::cin, input);
                    empty(input);
                }
            }           
}

