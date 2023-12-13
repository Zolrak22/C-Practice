// Grading Test.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// At page 44 Control Flow: Introduction
#include <iostream>
#include <string>

#define GROUP_1_THRESHOLD 8
#define GROUP_2_THRESHOLD 12
#define GROUP_3_THRESHOLD 18
#define GROUP_4_THRESHOLD 28
#define GROUP_5_THRESHOLD 38
#define GROUP_6_THRESHOLD 50
#define GROUP_7_THRESHOLD 70

#define GROUP_1_NAME "Group A"
#define GROUP_2_NAME "Group B"
#define GROUP_3_NAME "Group C"
#define GROUP_4_NAME "Group D"
#define GROUP_5_NAME "Group E"
#define GROUP_6_NAME "Group F"
#define GROUP_7_NAME "Group G"

std::string GetGroup(int age);

int main()
{
	std::string name = " ";
	int age = 0;
	std::string group = " ";
	std::cout << "Please enter your name: ";
	std::getline(std::cin, name);
	std::cout << "Please enter your age: ";
	std::cin >> age;

	group = GetGroup(age);
	std::cout << "Welcome " << name << ". You are in " << group << "."; 
	return 0;
}

std::string GetGroup(int age)
{
	if (age <= GROUP_1_THRESHOLD)
	{
		return GROUP_1_NAME;
	}
	else if (age <= GROUP_2_THRESHOLD)
	{
		return GROUP_2_NAME;
	}
	else if (age <= GROUP_3_THRESHOLD)
	{
		return GROUP_3_NAME;
	}
	else if (age <= GROUP_4_THRESHOLD)
	{
		return GROUP_4_NAME;
	}
	else if (age <= GROUP_5_THRESHOLD)
	{
		return GROUP_5_NAME;
	}
	else if (age <= GROUP_6_THRESHOLD)
	{
		return GROUP_6_NAME;
	}
	else
	{
		return GROUP_7_NAME;
	}
}