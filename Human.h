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
		std::cout << "‚Æ‚¢‚¤–½—ß‚ð" << m_name << "‚ªs‚Á‚½" << std::endl; 
	}
};

