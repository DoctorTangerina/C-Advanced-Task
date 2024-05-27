/*
** EPITECH PROJECT, 2024
** Santa Claus
** File description:
** little pony class
*/

#pragma once

#include "toy.hpp"

class LittlePony : public Toy {
public:
    LittlePony(std::string name);
    ~LittlePony() = default;

    void isTaken() const override;
private:

};