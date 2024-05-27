/*
** EPITECH PROJECT, 2024
** Santa Claus
** File description:
** table interface
*/

#pragma once

#include "IContainer.hpp"
#include <string>

class Object;

class ITable : public IContainer {
public:
    virtual const std::string **showContent() = 0;
};

ITable *createTable();
