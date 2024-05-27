/*
** EPITECH PROJECT, 2024
** Santa Claus
** File description:
** table interface
*/

#pragma once

#include <string>

class Object;

class ITable {
public:
    virtual void receiveObject(Object *) = 0;
    virtual Object *giveObject(int) = 0;
};

ITable *createTable();
