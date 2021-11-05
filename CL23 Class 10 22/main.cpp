#include <string>
#include <iostream>
using namespace std;

#include "Catt.h"
#include "Human.h"
#include "Dog.h"
#include "Bear.h"

void PetsAction();

int main() {

	//生成
	Human human;
	Catt cat("くま");
	Dog dog("イッヌ");
	Bear bear("くまモン");

	//猫　鳴け
	human.SetPet(&cat);
	human.PetAction();

	//犬　鳴け
	human.SetPet(&dog);
	human.PetAction();

	//熊　ほえろ
	human.SetPet(&bear);
	human.PetAction();


	return 0;
}

//複数ペットを飼えるようにしたかった。
void PetsAction() {

	Human human;
	Catt cat("くま");
	Dog dog("イッヌ");


	//	ペットを複数持てるようにした。

	//ペット（複数）
	human.SetPets(&cat);
	human.SetPets(&dog);

	//猫と犬がなく
	human.PetsAction();

	//猫を捨てる
	human.ReleasePets();
	human.PetsAction();

	//犬を捨てる
	human.ReleasePets();
	human.PetsAction();
}