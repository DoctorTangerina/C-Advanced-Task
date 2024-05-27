/*
** EPITECH PROJECT, 2024
** Santa Claus
** File description:
** papa xmas conveyor belt class
*/

#include "papaXmasConveyorBelt.hpp"
#include "IElf.hpp"
#include "giftPaper.hpp"
#include "box.hpp"

IConveyorBelt *createConveyorBelt() {
    return new PapaXmasConveyorBelt();
}

PapaXmasConveyorBelt::PapaXmasConveyorBelt() { holding = nullptr; }

IConveyorBelt &PapaXmasConveyorBelt::operator>>(IElf &elf)
{
    Object *paper = new GiftPaper();
    elf.takeObject(paper);
    return *this;
}

IConveyorBelt &PapaXmasConveyorBelt::operator<<(const IElf &)
{
    delete holding;
    holding = nullptr;
    return *this;
}

void PapaXmasConveyorBelt::receiveObject(Object *&obj) {
    if (holding)
        return;
    holding = obj;
    obj = nullptr;
}

Object *PapaXmasConveyorBelt::giveObject(int) {
    Object *temp = holding;
    holding = nullptr;
    return temp;
}
