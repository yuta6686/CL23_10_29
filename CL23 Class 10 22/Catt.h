#pragma once
#include <string>
#include <iostream>
#include "Pet.h"

class Catt :public Pet
{
public:
	//コンストラクタ
	Catt() : Pet("名無しの猫") {}
	Catt(const std::string& name) : Pet(name) {}

	//アクション
	void Action(void)override {
		std::cout << GetName() << "は「にゃーん」と鳴いた。" << std::endl;
	}
};

