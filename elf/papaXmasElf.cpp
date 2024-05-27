/*
** EPITECH PROJECT, 2024
** Santa Claus
** File description:
** papa xmas elf class
*/

#include "papaXmasElf.hpp"
#include "wrap.hpp"
#include <iostream>

PapaXmasElf::PapaXmasElf()
{
    holding = nullptr;
    conveyorBelt = createConveyorBelt();
    table = createTable();
}

PapaXmasElf::~PapaXmasElf()
{
    if (holding)
        delete holding;
    delete conveyorBelt;
    delete table;
}

bool PapaXmasElf::wrapAGift()
{
    const std::string **names = lookTable();

    for (int i = 0; names[i] != nullptr; i++)
        if (names[i]->compare("a box") == 0) {
            takeObject(table->giveObject(i));
            goto boxPresent;
        }
    goto ending;

    boxPresent:
    for (int i = 0; names[i] != nullptr; i++)
        if (names[i]->compare("a box") && names[i]->compare("a gift paper")) {
            wrapObject(table->giveObject(i));
            goto wrapBox;
        }
    goto ending;

    wrapBox:
    table->receiveObject(holding);
    *conveyorBelt >> *this;
    wrapObject(table->giveObject(0));
    conveyorBelt->receiveObject(holding);
    *conveyorBelt << *this;
    return true;

    ending:
    endOfService();
    return false;
}

void PapaXmasElf::takeObject(Object *obj)
{
    if (holding)
        return;
    holding = obj;
    obj = nullptr;
}

void PapaXmasElf::wrapObject(Object *obj) const
{
    if (!holding)
        return;
    if (Wrap *wrap = dynamic_cast<Wrap *>(holding)) {
        wrap->wrapMeThat(obj);
    }
}

const std::string **PapaXmasElf::lookTable() const
{
    return table->showContent();
}

void PapaXmasElf::endOfService() const
{
    std::cout << "o'pa ere's somin' wron' in da box!" << std::endl;
}
