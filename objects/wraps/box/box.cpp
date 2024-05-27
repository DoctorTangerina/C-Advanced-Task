/*
** EPITECH PROJECT, 2024
** Santa Claus
** File description:
** box class
*/

#include "box.hpp"

Box::Box() : Wrap("a box") { this->isOpened = true; }

bool Box::wrapMeThat(Object *item)
{
    if (!this->isOpened)
        return false;
    return Wrap::wrapMeThat(item);
}

Object *Box::openMe()
{
    this->isOpened = true;
    return Wrap::openMe();
}

void Box::closeMe()
{
    this->isOpened = false;
}
