#pragma once
#include <string>
#include <iostream>
#include "Pet.h"
class Dog:public Pet
{
public:
	//�R���X�g���N�^
	Dog() :Dog("�C�b�k"){}
	Dog(const std::string& name) :Pet(name) {}

	//�A�N�V����
	void Action(void)override {
		std::cout << GetName() << "�́u�킧��v�Ƌ������B\n";
	}

};

