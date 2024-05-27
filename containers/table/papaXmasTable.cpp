/*
** EPITECH PROJECT, 2024
** Santa Claus
** File description:
** papa xmas table class
*/

#include "papaXmasTable.hpp"
#include "littlePony.hpp"
#include "teddy.hpp"
#include "box.hpp"

PapaXmasTable::PapaXmasTable()
{
    for (int i = 0; i < 10; i++)
        tableTop[i] = nullptr;
    tableTop[0] = new LittlePony("my little pony");
    tableTop[1] = new Box();
    tableTop[2] = new Teddy("gummy bear");
    tableTop[3] = new Box();
}

void PapaXmasTable::receiveObject(Object *obj)
{
    for (int i = 0; i < 9; i++)
        if (tableTop[i] == nullptr) {
            tableTop[i] = obj;
            return;
        }
    this->~PapaXmasTable();
    return;
}

Object *PapaXmasTable::giveObject(int i)
{
    return tableTop[i];
}

const std::string **PapaXmasTable::showContent()
{
    const std::string *names[10];
    int qtd = 0;
    
    for (int i = 0; i < 10; i++)
        if (tableTop[i])
            names[qtd++] = &tableTop[i]->getName();
        else
            names[qtd] = nullptr;

    return names;
}
