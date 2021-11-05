#pragma once
#include <string>
#include <iostream>
#include "Pet.h"
class Bear :
    public Pet
{
public:
    //�R���X�g���N�^
    Bear() :Bear("�������̃N�}") {}
    Bear(const std::string& name) :Pet(name) {}
    void SetName(const std::string& name) { m_name = name; }

    //�A�N�V����
    void Action(void)override {
        std::cout << GetName() << "�́A�u���������������v�Ɩi����" << std::endl;
    };
private:
    std::string m_name;
};

