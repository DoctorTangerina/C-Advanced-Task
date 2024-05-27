/*
** EPITECH PROJECT, 2024
** Santa Claus
** File description:
** teddy class
*/

#pragma once

#include "toy.hpp"

class Teddy : public Toy {
public:
    Teddy(std::string name);
    ~Teddy() = default;

    void isTaken() const override;
private:

};