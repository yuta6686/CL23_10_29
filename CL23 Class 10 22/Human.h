#pragma once
#include "/bisstdc++.h/bits/stdc++.h"
#include "Catt.h"


class Human
{
	std::string m_name;

	Catt m_cat;

public:
	Human():m_name("Perfect Human") {}
	Human(const std::string& name):m_name(name) {}

	void OrderCat() { 
		m_cat.Action(); 
		std::cout << "�Ƃ������߂�" << m_name << "���s����" << std::endl; 
	}
};

