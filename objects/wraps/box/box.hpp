/*
** EPITECH PROJECT, 2024
** Santa Claus
** File description:
** box class
*/

#pragma once

#include "wrap.hpp"

class Box : public Wrap {
public:
    Box();
    ~Box() = default;

    bool wrapMeThat(Object *&item) override;
    Object *openMe() override;
    void closeMe() override;
private:
    bool isOpened;
};