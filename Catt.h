#pragma once
#include "/bisstdc++.h/bits/stdc++.h"
#include "Pet.h"

class Catt :public Pet
{
	std::string m_name;

public:
	Catt() : m_name("�������̔L") {}
	Catt(const std::string& name) : m_name(name) {}

	void Action(void)override {
		std::cout << m_name << "�́u�ɂ�[��v�Ɩ����B" << std::endl;
	}
};

