#pragma once
#include <string>
#include <iostream>
#include "Pet.h"
class Bear :
    public Pet
{
public:
    //コンストラクタ
    Bear() :Bear("名無しのクマ") {}
    Bear(const std::string& name) :Pet(name) {}
    void SetName(const std::string& name) { m_name = name; }

    //アクション
    void Action(void)override {
        std::cout << GetName() << "は、「ぐぉおおおおお」と吠えた" << std::endl;
    };
private:
    std::string m_name;
};

