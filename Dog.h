#pragma once
#include "/bisstdc++.h/bits/stdc++.h"
#include "Pet.h"
class Dog:public Pet
{
public:
	Dog() :m_name("イッヌ"){}
	Dog(const std::string& name) :m_name(name) {}

	void Action(void)override {
		std::cout << m_name << "は「わぉん」と泣いた。\n";
	}

private:
	std::string m_name;
};

