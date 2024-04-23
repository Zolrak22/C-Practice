// Updated C++ Template.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cctype>
#include <string>
using std::cout; using std::cin; using std::endl; using std::string;   //std namespace usage

class Creature
{
public:
	Creature();

	void SetName(string name);
	string GetName();

	float GetHealth();
	
	void TakeDamage(float damage);

	void DisplayName(string name);
	void DisplayHealth(float health);
	void DisplayLevel(int Level);

private:
	string Name;
	float Health;

protected:
	int Level;

};

class Goblin : public Creature
{
public:
	Goblin();

	int GetLevel();
};

int main()
{
	Goblin Gobby;

	Gobby.DisplayName(Gobby.GetName());
	Gobby.DisplayHealth(Gobby.GetHealth());
	Gobby.DisplayLevel(Gobby.GetLevel());

	system("pause");
	return 0;
}

Creature::Creature()
{
	Health = 100.0f;
	cout << "A creature has been created! " << endl;
}

void Creature::SetName(string name)
{
	Name = name;
}

string Creature::GetName()
{
	return Name;
}


float Creature::GetHealth()
{
	return Health;
}

void Creature::TakeDamage(float damage)
{
	float TotalHealth;
	TotalHealth = Health - damage;

	if (TotalHealth <= 0.0f)
	{
		cout << GetName() << " has died!" << endl;
	}

	else
	{
		Health -= damage;
	}

	cout << "Health: " << GetHealth() << endl;
}

Goblin::Goblin()
{
	Level = 1;

	SetName("Gobby");
}

int Goblin::GetLevel()
{
	return Level;
}

void Creature::DisplayName(string name)
{
	cout << "Name: " << name << endl;
}

void Creature::DisplayHealth(float health)
{
	cout << "Health: " << health << endl;
}

void Creature::DisplayLevel(int level)
{
	cout << "Level: " << level << endl;
}

//// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
//// Debug program: F5 or Debug > Start Debugging menu
