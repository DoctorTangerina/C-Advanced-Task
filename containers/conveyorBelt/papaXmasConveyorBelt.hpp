/*
** EPITECH PROJECT, 2024
** Santa Claus
** File description:
** papa xmas conveyor belt class
*/

#pragma once

#include "IConveyorBelt.hpp"

class PapaXmasConveyorBelt : public IConveyorBelt {
public:
    PapaXmasConveyorBelt();
    ~PapaXmasConveyorBelt() = default;

    IConveyorBelt &operator>>(IElf &) override;
    IConveyorBelt &operator<<(const IElf &) override;
    void receiveObject(Object *) override;
    Object *giveObject(int) override;
private:
    Object *holding;
};