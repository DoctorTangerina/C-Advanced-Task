/*
** EPITECH PROJECT, 2024
** Santa Claus
** File description:
** papa xmas table class
*/

#include "ITable.hpp"

class PapaXmasTable : public ITable {
public:
    PapaXmasTable();
    ~PapaXmasTable() = default;
    void receiveObject(Object *) override;
    Object *giveObject(int) override;
    const std::string **showContent() override;
private:
    Object *tableTop[10];
};