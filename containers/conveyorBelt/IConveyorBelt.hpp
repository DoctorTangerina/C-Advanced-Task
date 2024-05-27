/*
** EPITECH PROJECT, 2024
** Santa Claus
** File description:
** conveyor belt interface
*/

#pragma once

#include "ITable.hpp"

class IElf;
class Object;

class IConveyorBelt : public ITable {
public:
    virtual IConveyorBelt &operator>>(IElf &) = 0;
    virtual IConveyorBelt &operator<<(const IElf &) = 0;
};

IConveyorBelt *createConveyorBelt();