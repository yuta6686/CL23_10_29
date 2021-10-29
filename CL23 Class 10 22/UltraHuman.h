#pragma once
#include "Pet.h"
class UltraHuman
{
public:
	UltraHuman() :m_pPets(nullptr) {}
	void PetAction();
	void Register(Pet* p) { m_pPets = p; }
private:
	Pet* m_pPets;
};

