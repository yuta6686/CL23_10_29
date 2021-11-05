#pragma once
#include <vector>
#include "Pet.h"
class Human 
{
private:
	Pet* m_pPet;
	std::vector<Pet*> m_pPets;	//ペット（複数用）
public:
	
	Human();
	Human(Pet* p);

	//ペット（単体）
	void SetPet(Pet* p) { m_pPet = p; }
	void PetAction(void);

	//ペット（複数）
	void SetPets(Pet* p) { m_pPets.push_back(p); }
	void ReleasePets(void) { m_pPets.pop_back(); }
	void PetsAction(void);
};


