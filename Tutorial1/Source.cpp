// Updated C++ Template.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cctype>
#include <string>
#include "Object.h"
#include "Actor.h"
#include "Pawn.h"
using std::cout; using std::cin; using std::endl; using std::string;   //std namespace usage

void InheritanceFunction()
{
	Object* ptrToObject = new Object;
	Actor* ptrToActor = new Actor;
	Pawn* ptrToPawn = new Pawn;

	Object* ObjectArray[] = { ptrToObject, ptrToActor, ptrToPawn };

	for (int i = 0; i < 3; i++)
	{
		//ObjectArray[i]->BeginPlay();

		Object* obj = ObjectArray[i];

		Actor* act = dynamic_cast <Actor*> (obj);

		if (act)
		{
			act->ActorFunction();
		}

		Pawn* pwn = static_cast<Pawn*>(obj); // casts it regardless if it should

		if (pwn)
		{
			pwn->PawnFunction();
		}
	}

	delete ptrToObject;
	delete ptrToActor;
	delete ptrToPawn;
}

int main()
{
	InheritanceFunction();

	system("pause");
	return 0;
}

//// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
//// Debug program: F5 or Debug > Start Debugging menu
