#pragma once
#include "Catt.h"

class CatHuman :
    private Catt
{
public:
    CatHuman(const std::string pName ):Catt(pName){}
    CatHuman():Catt("ƒ^ƒ}") {}

    void PetAction() {
        Action();
    }
};

