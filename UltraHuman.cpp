#include "UltraHuman.h"

void UltraHuman::PetAction()
{
	if (m_pPets) {
		m_pPets->Action();
	}
}
