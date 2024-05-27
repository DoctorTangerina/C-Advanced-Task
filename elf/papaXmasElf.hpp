/*
** EPITECH PROJECT, 2024
** Santa Claus
** File description:
** papa xmas elf class
*/

#pragma once

#include "IElf.hpp"
#include "IConveyorBelt.hpp"
#include "ITable.hpp"

class PapaXmasElf : public IElf {
public:
    PapaXmasElf();
    ~PapaXmasElf();

    bool wrapAGift() override;
private:
    void takeObject(Object *) override;
    void wrapObject(Object *) const override;
    const std::string **lookTable() const override;
    void endOfService() const;

    Object *holding;
    IConveyorBelt *conveyorBelt;
    ITable *table;
};
