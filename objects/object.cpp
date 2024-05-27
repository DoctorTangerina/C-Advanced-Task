/*
** EPITECH PROJECT, 2024
** Santa Claus
** File description:
** Object class
*/

#include "object.hpp"

Object::Object(std::string &name)
{
    this->name = name;
}

const std::string Object::getName() const
{
    return this->name;
}

std::ostream &operator<<(std::ostream &flux, const Object &obj)
{
    flux << "Object info:\n";
    flux << "Name: " << obj.getName() << "\n";
    return flux << std::endl;
}
