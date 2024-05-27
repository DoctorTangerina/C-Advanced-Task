/*
** EPITECH PROJECT, 2024
** Santa Claus
** File description:
** teddy class
*/

#include "teddy.hpp"
#include <iostream>

Teddy::Teddy(std::string name) : Toy(name) {}

void Teddy::isTaken() const
{
    std::cout << "gra hu" << std::endl;
}
