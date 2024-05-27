/*
** EPITECH PROJECT, 2024
** Santa Claus
** File description:
** wrap class
*/

#pragma once

#include "object.hpp"

class Wrap : public Object {
public:
    Wrap(std::string name);
    ~Wrap();

    virtual bool wrapMeThat(Object *&item);
    virtual Object *openMe();
    virtual void closeMe();
    void isTaken() const;
private:
    Object *holding;
};