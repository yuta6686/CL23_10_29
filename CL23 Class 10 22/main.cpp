#include <string>
#include <iostream>
using namespace std;

#include "Catt.h"
#include "Human.h"
#include "Dog.h"
#include "Bear.h"

void PetsAction();

int main() {

	//����
	Human human;
	Catt cat("����");
	Dog dog("�C�b�k");
	Bear bear("���܃���");

	//�L�@��
	human.SetPet(&cat);
	human.PetAction();

	//���@��
	human.SetPet(&dog);
	human.PetAction();

	//�F�@�ق���
	human.SetPet(&bear);
	human.PetAction();


	return 0;
}

//�����y�b�g��������悤�ɂ����������B
void PetsAction() {

	Human human;
	Catt cat("����");
	Dog dog("�C�b�k");


	//	�y�b�g�𕡐����Ă�悤�ɂ����B

	//�y�b�g�i�����j
	human.SetPets(&cat);
	human.SetPets(&dog);

	//�L�ƌ����Ȃ�
	human.PetsAction();

	//�L���̂Ă�
	human.ReleasePets();
	human.PetsAction();

	//�����̂Ă�
	human.ReleasePets();
	human.PetsAction();
}