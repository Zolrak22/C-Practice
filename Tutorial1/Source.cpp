// Updated C++ Template.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cctype>
#include <string>
using std::cout; using std::cin; using std::endl; using std::string;   //std namespace usage

class Item
{
public:
	Item()
	{
		cout << "An item has been created!" << endl;
	}
	~Item()
	{
		cout << "An item has been destroyed!" << endl;
	}
};

class Critter
{
public:

	Critter()
	{
		cout << "A critter is born!" << endl;
		++CritterCount;
	}
	~Critter()
	{
		cout << "A critter has been destroyed!" << endl;
		--CritterCount;
	}

	static void AnnounceCount()
	{
		cout << "Critter Count: " << CritterCount << endl;
	}

	static int CritterCount;

};

int Critter::CritterCount = 0;

void AddToCount()
{
	static int count = 0;
	count++;
	cout << count << endl;
}

int main()
{



	Critter::AnnounceCount();

	Critter* crit = new Critter;
	Critter::AnnounceCount();
	delete crit;
	Critter::AnnounceCount();

	static Item item;

	for (int i = 0; i < 100; i++) 
	{
		AddToCount();
	}



	system("pause");
	return 0;
}



//// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
//// Debug program: F5 or Debug > Start Debugging menu
