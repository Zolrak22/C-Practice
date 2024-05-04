#include <iostream>
#include <cctype>
#include <string>
#include "Object.h"
using std::cout; using std::cin; using std::endl; using std::string;   //std namespace usage

void Object::BeginPlay()
{
	cout << "Object/Parent BeginPlay() called." << endl << endl;
}

void Object::ObjectFunction()
{
	cout << "ObjectFunction() called" << endl << endl;
}