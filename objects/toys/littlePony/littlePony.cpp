/*
** EPITECH PROJECT, 2024
** Santa Claus
** File description:
** little pony class
*/

#include "littlePony.hpp"
#include <iostream>

LittlePony::LittlePony(std::string name) : Toy(name) {}

void LittlePony::isTaken() const
{
    std::cout << "yo man" << std::endl;
}
