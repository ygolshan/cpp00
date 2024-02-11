/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygolshan <ygolshan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 18:08:21 by ygolshan          #+#    #+#             */
/*   Updated: 2023/10/17 15:21:29 by ygolshan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main (int argc,char **argv)
{
  int i = 1;
  int j = 0;
  if (argc == 1)
    std::cout <<  "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
  else
  {
    while(i < argc )
    {
      j= 0;
        while(argv[i][j])
        {
          if (argv[i][j] >= 97 && argv[i][j] <= 122) 
          {
            argv[i][j] -= 32;
            std::cout << argv[i][j];
            j++;
          }
          else
          {
            std::cout << argv[i][j];
            j++;
          }
        }
        i++;
        std::cout<< " ";
    }
  }
  std::cout << std::endl;
}
