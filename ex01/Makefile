# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ebouabba <ebouabba@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/02 19:29:19 by ebouabba          #+#    #+#              #
#    Updated: 2022/12/02 20:48:17 by ebouabba         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Phonebook

SRC = main.cpp Contact.cpp Phonebook.cpp

OBJ = $(SRC:.cpp=.o)

CC = c++ -Wall -Wextra -Werror -std=c++98

all : $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

%.o:%.cpp  Contact.hpp Phonebook.hpp
	$(CC) -c $< -o $@

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all
