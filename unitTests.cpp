/*
** EPITECH PROJECT, 2024
** Santa Claus
** File description:
** the unit test function requested
*/

#include "teddy.hpp"
#include "littlePony.hpp"
#include "box.hpp"
#include "giftPaper.hpp"
#include "unitTests.hpp"
#include <iostream>

Object **MyUnitTests() {
    Object *array[2];

    array[0] = new LittlePony("happy pony");
    array[1] = new Teddy("cuddles");

    std::cout << "first object: " << array[0];
    std::cout << "second object: " << array[1];

    return array;
}

Object *MyUnitTests(Object **array)
{
    Teddy *myTeddy = dynamic_cast<Teddy *>(array[0]);
    if (!myTeddy) {
        std::cerr << "First object is not a Teddy" << std::endl;
        return nullptr;
    }
    Box *myBox = dynamic_cast<Box *>(array[1]);
    if (!myBox) {
        std::cerr << "Second object is not a Box" << std::endl;
        return nullptr;
    }
    GiftPaper *myGiftPaper = dynamic_cast<GiftPaper *>(array[2]);
    if (!myGiftPaper) {
        std::cerr << "Third object is not a Gift Paper" << std::endl;
        return nullptr;
    }

    if (!myBox->wrapMeThat(myTeddy)) {
        std::cerr << "The box is closed or it contains something inside already" << std::endl;
        return nullptr;
    }
    myBox->closeMe();
    if (myGiftPaper->wrapMeThat(myBox)) {
        std::cerr << "The gift paper already has something inside" << std::endl;
        return nullptr;
    }

    return myGiftPaper;
}
