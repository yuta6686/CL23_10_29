#pragma once
#include "/bisstdc++.h/bits/stdc++.h"
#include "Pet.h"
class Dog:public Pet
{
public:
	Dog() :m_name("�C�b�k"){}
	Dog(const std::string& name) :m_name(name) {}

	void Action(void)override {
		std::cout << m_name << "�́u�킧��v�Ƌ������B\n";
	}

private:
	std::string m_name;
};

