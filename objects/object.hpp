/*
** EPITECH PROJECT, 2024
** Santa Claus
** File description:
** Object class
*/

#pragma once

#include <ostream>
#include <string>

class Object {
public:
    Object(std::string &name);
    virtual ~Object() = default;

    const std::string getName() const;
protected:
    virtual void isTaken() const = 0;

    std::string name;
};

std::ostream &operator<<(std::ostream &flux, const Object &obj);