/*
** EPITECH PROJECT, 2024
** Santa Claus
** File description:
** elf interface
*/

#pragma once

#include <string>

class Object;
class ITable;
class IConveyorBelt;

class IElf {
public:
    virtual bool wrapAGift() = 0;
    virtual void takeObject(Object *) = 0;
    virtual void wrapObject(Object *) const = 0;
    virtual const std::string **lookTable() const = 0;
};