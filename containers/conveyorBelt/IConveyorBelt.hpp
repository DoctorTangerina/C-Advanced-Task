/*
** EPITECH PROJECT, 2024
** Santa Claus
** File description:
** conveyor belt interface
*/

#pragma once

#include "IContainer.hpp"

class IElf;

class IConveyorBelt : public IContainer {
public:
    virtual IConveyorBelt &operator>>(IElf &) = 0;
    virtual IConveyorBelt &operator<<(const IElf &) = 0;
};

IConveyorBelt *createConveyorBelt();