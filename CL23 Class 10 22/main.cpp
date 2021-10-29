#include "/bisstdc++.h/bits/stdc++.h"
using namespace std;

#include"HumanCatPerformance.h"
#include "Catt.h"
#include "NeoHuman.h"
#include "UltraHuman.h"
#include "Dog.h"

//class Hoge {
//public:
//
//};
//
//class Page {
//	Hoge* pHoge;
//	Hoge* pHoges = new Hoge[10];
//
//public:
//	Page() : pHoge(new Hoge) {}
//	~Page() {
//		delete pHoge;
//		delete[] pHoges;
//	}
//
//	void nanka(int n) {
//		if (pHoges != nullptr) {
//			delete[] pHoges;
//		}
//		pHoges = new Hoge[n];
//	}
//
//	void destruction(void) {
//		if (pHoges != nullptr) {
//			delete[] pHoges;
//			pHoges = nullptr;
//		}
//	}
//};
//
//class Cat {
//	string m_name = "name";
//public:
//
//	Cat() :m_name("name") {}
//	Cat() { m_name = "name"; }
//
//	void SetName(string s) { m_name = s; }
//	void InputName() { cin >> m_name; }
//	
//	//string m_name = "kumatani";
//};

void Pmain() {
	/*Human* human = new Human;
human->OrderCat();
delete human;*/

	Catt* pCat = new Catt("‚­‚Üƒ‚ƒ“");
	NeoHuman* hito = new NeoHuman(pCat);

	hito->PetAction();

	hito->CatAction(pCat);

	NeoHuman* neo = new NeoHuman;

	neo->PetAction();

	neo->SetCat(pCat);

	neo->PetAction();

	delete pCat;
	delete hito;
	delete neo;

}

int main() {
	//Pmain();

	Catt cat("‚Ë‚±");
	Dog  dog("‚¢‚Ê");

	UltraHuman hajime;

	hajime.Register(&cat);

	hajime.PetAction();

	hajime.Register(&dog);

	hajime.PetAction();

	return 0;
}