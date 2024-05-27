/*
** EPITECH PROJECT, 2024
** Santa Claus
** File description:
** wrap class
*/

#include "wrap.hpp"

Wrap::Wrap(std::string name) : Object(name) { this->holding = nullptr; }

Wrap::~Wrap()
{
    delete this->holding;
}

bool Wrap::wrapMeThat(Object *item)
{
    if (holding)
        return false;
    holding = item;
    return true;
}

Object *Wrap::openMe()
{
    Object *temp = holding;
    holding = nullptr;
    return temp;
}

void Wrap::closeMe()
{
    return;
}

void Wrap::isTaken() const {}
