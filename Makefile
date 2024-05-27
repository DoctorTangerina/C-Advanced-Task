##
## EPITECH PROJECT, 2024
## Santa Claus
## File description:
## makefile for the project
##

CC = g++
CFLAGS += -std=c++20 -Wall -Wextra -Werror
TARGET = santa
SRCS = 
OBJ = $(SRCS:.cpp=.o)

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(TARGET)

re:	fclean all