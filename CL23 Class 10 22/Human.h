#pragma once
#include <vector>
#include "Pet.h"
class Human 
{
private:
	Pet* m_pPet;
	std::vector<Pet*> m_pPets;	//�y�b�g�i�����p�j
public:
	
	Human();
	Human(Pet* p);

	//�y�b�g�i�P�́j
	void SetPet(Pet* p) { m_pPet = p; }
	void PetAction(void);

	//�y�b�g�i�����j
	void SetPets(Pet* p) { m_pPets.push_back(p); }
	void ReleasePets(void) { m_pPets.pop_back(); }
	void PetsAction(void);
};


