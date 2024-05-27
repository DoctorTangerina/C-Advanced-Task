/*
** EPITECH PROJECT, 2024
** Santa Claus
** File description:
** table interface
*/

class Object;

class IContainer {
public:
    virtual void receiveObject(Object *) = 0;
    virtual Object *giveObject(int) = 0;
};