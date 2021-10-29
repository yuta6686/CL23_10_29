#include "NeoHuman.h"
#include "Catt.h"

NeoHuman::NeoHuman():m_pCat(nullptr)
{
	
}

NeoHuman::NeoHuman(Catt* p):m_pCat(p)
{
	
}


void NeoHuman::PetAction(void)
{
	if (!m_pCat)return;
	m_pCat->Action();
}

void NeoHuman::CatAction(Catt* pCat)
{
	pCat->Action();
}
