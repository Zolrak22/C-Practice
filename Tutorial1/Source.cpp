// Updated C++ Template.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cctype>
#include <string>
using std::cout; using std::cin; using std::endl; using std::string;   //std namespace usage

class Object
{
public:
	virtual void BeginPlay();
};

class Actor : public Object
{
public:
	virtual void BeginPlay() override;
};

class Pawn : public Actor
{
public:
	virtual void BeginPlay() override;
};

int main()
{

	Object* ptrToObject = new Object;
	Actor* ptrToActor = new Actor;
	Pawn* ptrToPawn = new Pawn;

	Object* ObjectArray[] = { ptrToObject, ptrToActor, ptrToPawn };

	for (int i = 0; i < 3; i++)
	{
		ObjectArray[i]->BeginPlay();
	}

	delete ptrToObject;
	delete ptrToActor;
	delete ptrToPawn;

	system("pause");
	return 0;
}

void Object::BeginPlay()
{
	cout << "Object/Parent BeginPlay() called." << endl << endl;
}

void Actor::BeginPlay()
{
	cout << "Actor/Child BeginPlay() called." << endl << endl;
}

void Pawn::BeginPlay()
{
	cout << "Pawn/Grandchild BeginPlay() called." << endl << endl;
}

//// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
//// Debug program: F5 or Debug > Start Debugging menu
