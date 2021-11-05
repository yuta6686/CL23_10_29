#pragma once
#include <string>
#include <iostream>
#include "Pet.h"
class Dog:public Pet
{
public:
	//コンストラクタ
	Dog() :Dog("イッヌ"){}
	Dog(const std::string& name) :Pet(name) {}

	//アクション
	void Action(void)override {
		std::cout << GetName() << "は「わぉん」と泣いた。\n";
	}

};

