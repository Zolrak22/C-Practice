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

	//Object* obj = new Object;
	//obj->BeginPlay();

	//Actor* act = new Actor;
	//act->BeginPlay();

	Pawn* pwn = new Pawn;
	pwn->BeginPlay();

	//delete obj;
	//delete act;
	delete pwn;

	system("pause");
	return 0;
}

void Object::BeginPlay()
{
	cout << "Object BeginPlay() called." << endl;
}

void Actor::BeginPlay()
{
	cout << "Actor BeginPlay() called." << endl;
	Object::BeginPlay();
}

void Pawn::BeginPlay()
{
	cout << "Pawn BeginPlay() called." << endl;
	Object::BeginPlay();
	Actor::BeginPlay();
}

//// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
//// Debug program: F5 or Debug > Start Debugging menu
