#include "Human.h"
#include <vector>

Human::Human()
	: m_pPet(nullptr)
{

}

Human::Human(Pet* p)
	: m_pPet(p)
{
}

void Human::PetAction(void)
{
	if (m_pPet) {
		m_pPet->Action();
		
	}
}

void Human::PetsAction(void)
{
	for (int i = 0; i < m_pPets.size(); i++) {
		m_pPets.at(i)->Action();
	}
}
