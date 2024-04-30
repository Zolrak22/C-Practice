// Updated C++ Template.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cctype>
#include <string>
using std::cout; using std::cin; using std::endl; using std::string;   //std namespace usage

class Character
{
public:
	Character();
	~Character();

	int* CharacterAge;
	float* CharacterHealth;
};

int main()
{
	Character* Char = new Character;
	delete Char;


	system("pause");
	return 0;
}

Character::Character()
{
	cout << "A new character is born!" << endl;

	CharacterAge = new int(22);
	CharacterHealth = new float(100.0f);
}

Character::~Character()
{
	cout << "The character has perished!" << endl;

	delete CharacterAge;
	delete CharacterHealth;
}

//// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
//// Debug program: F5 or Debug > Start Debugging menu
