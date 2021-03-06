#pragma once
#include "/bisstdc++.h/bits/stdc++.h"
#include "Catt.h"
#include "Human.h"

class HumanCatPerformance
{
	Catt* mp_cat;
	Human* mp_human;

	bool command;
public:
	HumanCatPerformance(Catt* pCat,Human* pHuman):mp_cat(pCat),mp_human(pHuman),command(false){}
	
	void HumanCatAction(void) {
		if (command) {
			//人間に命令を送る
			mp_cat->Action();
		}
	}


	void SetCommnad(bool cm) { command = cm; }
};

