#pragma once
#include "/bisstdc++.h/bits/stdc++.h"
#include "Pet.h"

class Catt :public Pet
{
	std::string m_name;

public:
	Catt() : m_name("名無しの猫") {}
	Catt(const std::string& name) : m_name(name) {}

	void Action(void)override {
		std::cout << m_name << "は「にゃーん」と鳴いた。" << std::endl;
	}
};

