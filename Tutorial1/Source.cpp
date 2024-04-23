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
};

int main()
{
	Creature Igor;
	Igor.SetName("Igor");

	cout << "Its name: " <<  Igor.GetName() << endl;
	cout << "Health: " << Igor.GetHealth() << endl;

	float giveDamage{ 34.50f };

	cout << Igor.GetName() <<" will now take " << giveDamage << " damage!" << endl;

	Igor.TakeDamage(giveDamage);

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
//// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
//// Debug program: F5 or Debug > Start Debugging menu
