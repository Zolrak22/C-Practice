// Updated C++ Template.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cctype>
#include <string>
using std::cout; using std::cin; using std::endl; using std::string;   //std namespace usage

struct Character
{
	Character();
	void PrintHealth();
	string Name;
	float Health;
};

int main()
{
	for (int i = 0; i < 10; i++)
	{
		Character* PtrToChar = new Character(); // Stored in the Heap

		cout << PtrToChar->Name << endl;

		PtrToChar->PrintHealth();

		delete PtrToChar;
	}



	system("pause");
	return 0;
}

Character::Character()
{
	Name = "Default Name";
	Health = 100.0f;
}

void Character::PrintHealth()
{
	cout << "Health = " << Health << endl;
}

//// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
//// Debug program: F5 or Debug > Start Debugging menu
