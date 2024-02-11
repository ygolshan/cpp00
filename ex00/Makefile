# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ygolshan <ygolshan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/16 12:24:38 by ygolshan          #+#    #+#              #
#    Updated: 2023/10/17 14:58:12 by ygolshan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone
CXX = c++
CXXFLAGS = -std=c++98 -Wall -Wextra -Werror
SRC = megaphone.cpp
OBJ = $(SRC:.cpp=.o)

$(NAME): $(OBJ)
	$(CXX) $(OBJ) $(CXXFLAGS) -o $(NAME)

all: $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
