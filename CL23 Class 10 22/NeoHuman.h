#pragma once
class Catt;

class NeoHuman
{
public:
	NeoHuman();
	NeoHuman(Catt* p);

	void SetCat(Catt* p) { m_pCat = p; }

	void PetAction(void);

	void CatAction(Catt* pCat);
private:
	Catt* m_pCat;
};

