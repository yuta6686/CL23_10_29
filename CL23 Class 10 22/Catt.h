#pragma once
#include <string>
#include <iostream>
#include "Pet.h"

class Catt :public Pet
{
public:
	//�R���X�g���N�^
	Catt() : Pet("�������̔L") {}
	Catt(const std::string& name) : Pet(name) {}

	//�A�N�V����
	void Action(void)override {
		std::cout << GetName() << "�́u�ɂ�[��v�Ɩ����B" << std::endl;
	}
};

