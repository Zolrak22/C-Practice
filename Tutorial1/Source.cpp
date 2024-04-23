// Updated C++ Template.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cctype>
#include <string>
using std::cout; using std::cin; using std::endl; using std::string;   //std namespace usage

class Animal
{
public:
	Animal();
	Animal(string name, int age, float health);

	string Name;
	int Age;
	float Health;

	void Report();
};

class Dog :public Animal
{
public:
	Dog();
	Dog(string name, int age, float health);

	void Speak();
};

class Corgi : public Dog
{

};

int main()
{
	Corgi corgi;
	
	corgi.Speak();
	corgi.Report();

	Dog dog("Spot", 4, 85.f);

	dog.Speak();

	system("pause");
	return 0;
}

Animal::Animal()
{
	cout << "An ANIMAL is born!" << endl;

	Name = "DEFAULT";
	Age = 2;
	Health = 100.0f;
}

Animal::Animal(string name, int age, float health):
	Name(name), Age(age), Health(health)
{
	Report();
}

void Animal::Report()
{
	cout << endl;
	cout << "Name: " << Name << endl;
	cout << "Age: " << Age << endl;
	cout << "Health: " << Health << endl;
	cout << endl;
}

Dog::Dog()
{
	cout << "A DOG is born!" << endl;
}

Dog::Dog(string name, int age, float health) :
	Animal(name, age, health)
{
	
}

void Dog::Speak()
{
	cout << "The dog says 'Woof! Woof!'" << endl;
}
//// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
//// Debug program: F5 or Debug > Start Debugging menu
