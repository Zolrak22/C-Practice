#include <iostream>
#include <cstring>  //for c-style string functions
#include <cctype>   // for character-based functions
#include <string>	// for c++ strings

int main()
{
	char first_name[20]{};
	char last_name[20]{};
	char full_name[50]{};
	char temp[50]{};

	/*
	std::cout << "Please enter your first name: ";
	std::cin >> first_name;

	std::cout << "Please enter your last name: ";
	std::cin >> last_name;
	std::cout << "-----------------------------" << std::endl;

	std::cout << "Hello, " << first_name << " your first name has " << strlen(first_name) << " characters" << std::endl;
	std::cout << "and your last name, " << last_name << " has " << strlen(last_name) << " characters" << std::endl;

	strcpy_s(full_name, first_name);		//copy first_name to full_name
	strcat_s(full_name, " ");				//concatenate full_name and a space
	strcat_s(full_name, last_name);		//concatenate last_name to full_name
	std::cout << "Your full name is " << full_name << std::endl;
	*/

	/*
	std::cout << "-----------------------------" << std::endl;
	std::cout << "Enter your full name: ";
	std::cin >> full_name;	// by using cin it stops reading after a space
	std::cout << "Your full name is " << full_name << std::endl;
	*/

	/*
	std::cout << "Enter your full name: ";
	std::cin.getline(full_name, 50);
	std::cout << "Your full name is " << full_name << std::endl;

	std::cout << "-----------------------------" << std::endl;
	strcpy_s(temp, full_name);
	if (strcmp(temp, full_name) == 0)
		std::cout << temp << " and " << full_name << " are the same" << std::endl;
	else
		std::cout << temp << " and " << full_name << " are different" << std::endl;
	std::cout << "-----------------------------" << std::endl;

	for (size_t i{ 0 }; i < strlen(full_name); i++) {
		if (isalpha(full_name[i]))
			full_name[i] = toupper(full_name[i]);
	}
	std::cout << "Your full name is " << full_name << std::endl;

	std::cout << "-----------------------------" << std::endl;
	if (strcmp(temp, full_name) == 0)
		std::cout << temp << " and " << full_name << " are the same" << std::endl;
	else
		std::cout << temp << " and " << full_name << " are different" << std::endl;

	std::cout << "-----------------------------" << std::endl;
	std::cout << "Result of comparing " << temp << " and " << full_name << ": " << strcmp(temp, full_name) << std::endl;
	std::cout << "Result of comparing " << full_name << " and " << temp << ": " << strcmp(full_name, temp) << std::endl;
	*/

	/*
	std::string example1;					// Empty
	std::string example2{ "Frank" };		// Frank
	std::string example3{ example2 };		// Frank
	std::string example4{ "Frank", 3 };		// Fra
	std::string example5{ example3, 0, 2 };	// Fr
	std::string example6(3, 'X');			// XXX

	std::string s1;
	s1 = "C++ Rocks!";

	std::string s2{ "Hello" };
	s2 = s1;

	std::string part1{ "C++" };
	std::string part2{ "is a powerful" };

	std::string sentence;

	sentence = part1 + " " + part2 + " language!"; // C++ is a powerful language!
	std::cout << sentence << std::endl;
	//sentence = "C++" + " is powerful!"; // Illegal because you can't just combine c style strings by themselves, you have to have at least one c++ style string like the example above

	std::string stringExample1;
	std::string stringExample2{ "Frank" };

	std::cout << stringExample2[0] << std::endl;		// F
	std::cout << stringExample2.at(0) << std::endl;		// F

	stringExample2[0] = 'f';							//frank
	stringExample2.at(0) = 'p';							//prank

	std::string sampleString1{ "Frank" };

	for (char c : sampleString1)
		std::cout << c << std::endl; 

	std::string sample1{ "Frank" };

	for (int c : sample1)
		std::cout << c << std::endl; 
	*/

	/*
	std::string s1{ "Apple" };
	std::string s2{ "Banana" };
	std::string s3{ "Kiwi" };
	std::string s4{ "Apple" };
	std::string s5{ s1 };		//apple

	std::cout << s1.substr(0, 4);
	std::cout << s2.substr(2, 4); 
	*/

	/*
	std::string s1{ "This is a test" };

	std::cout << s1.find("This") << std::endl;	//0
	std::cout << s1.find("is") << std::endl;	//2
	std::cout << s1.find("test") << std::endl;	//10
	std::cout << s1.find("e") << std::endl;		//11
	std::cout << s1.find("is", 4) << std::endl;	//5
	std::cout << s1.find("XX") << std::endl;	//string::npos

	int test = s1.find("This");
	std::cout << "\n" + s1.substr(test, 4);
	*/

	/*
	std::string s1{ "This is a test" };
	
	std::cout << s1.erase(0, 5) << std::endl;	//is a test
	std::cout << s1 << std::endl;
	std::cout << s1.erase(5, 4) << std::endl;	// is a
	std::cout << s1 << std::endl;
	s1.clear();									//empties string s1
	std::cout << s1 << std::endl;
	*/

	/*
	std::string s1{ "Frank" };
	std::cout << s1.length() << std::endl;	//5

	s1 += " James";
	std::cout << s1 << std::endl;			//Frank James
	std::cout << s1.length() << std::endl;	//11
	*/

	/*
	std::string s1;
	//std::cin >> s1;						//Only accepts up to the first space

	//std::cout << s1 << std::endl;

	//std::getline(std::cin, s1);			// Reads the entire line until \n
	//std::cout << s1 << std::endl;

	std::getline(std::cin, s1, 'x');	//Removes an x from the text
	std::cout << s1 << std::endl;
	*/

	std::string s0;
	std::string s1{ "Apple" };
	std::string s2{ "Banana" };
	std::string s3{ "Kiwi" };
	std::string s4{ "apple" };
	std::string s5{ s1 };		//Apple
	std::string s6{ s1, 0, 3 };	//App
	std::string s7(10, 'X');	//XXXXXXXXXX

	//std::cout << s0 << std::endl;			//No garbage
	//std::cout << s0.length() << std::endl;	//empty string

	////initialization
	//std::cout << "\nInitialization" << "\n-------------------------------" << std::endl;
	//std::cout << "s1 is initialized to: " << s1 << std::endl;
	//std::cout << "s2 is initialized to: " << s2 << std::endl;
	//std::cout << "s3 is initialized to: " << s3 << std::endl;
	//std::cout << "s4 is initialized to: " << s4 << std::endl;
	//std::cout << "s5 is initialized to: " << s5 << std::endl;
	//std::cout << "s6 is initialized to: " << s6 << std::endl;
	//std::cout << "s7 is initialized to: " << s7 << std::endl;

	////Comparison
	//std::cout << "\nComparison" << "\n-------------------------------" << std::endl;
	//std::cout << std::boolalpha;
	//std::cout << s1 << " == " << s5 << ": " << (s1 == s5) << std::endl;		//True Apple == Apple
	//std::cout << s1 << " == " << s2 << ": " << (s1 == s2) << std::endl;		//False Apple != Banana
	//std::cout << s1 << " != " << s2 << ": " << (s1 != s2) << std::endl;		//True Apple != Banana
	//std::cout << s1 << " < " << s2 << ": " << (s1 < s2) << std::endl;		//True Apple < Banana
	//std::cout << s2 << " > " << s1 << ": " << (s2 > s1) << std::endl;		//True Banana > Apple
	//std::cout << s4 << " < " << s5 << ": " << (s4 < s5) << std::endl;		//False apple > Apple
	//std::cout << s1 << " == " << "Apple" << ": " << (s1 == "Apple") << std::endl; //True Apple == Apple

	/* // Assignment
	std::cout << "\nAssignment" << "\n-------------------------------" << std::endl;

	s1 = "Watermelon";
	std::cout << "s1 is now: " << s1 << std::endl;	 //Watermelon
	s2 = s1;
	std::cout << "s2 is now: " << s2 << std::endl;	//Watermelon

	s3 = "Frank";
	std::cout << "s3 is now: " << s3 << std::endl;	//Frank

	s3[0] = 'C';	//Crank
	std::cout << "s3 change first letter to 'C': " << s3 << std::endl;	//Crank
	s3.at(0) = 'P';
	std::cout << "s3 change first letter to 'P': " << s3 << std::endl;	//Prank
	*/

	/*
	s3 = "Watermelon";
	std::cout << "\nConcatenation" << "\n----------------------------" << std::endl;

	s3 = s5 + " and" + s2 + " juice";				// Apple and Banana juice
	std::cout << "s3 is now: " << s3 << std::endl;	// Apple and Banana juice

	//s3 = "nice " + "cold " + s5 + " juice";			//Compiler error for using 2 c style literals together instead of c style and an object
	*/

	/*
	// for loop
	std::cout << "\nLooping" << "\n----------------------------" << std::endl;

	s1 = "Apple";
	for (size_t i{ 0 }; i < s1.length(); ++i)
		std::cout << s1.at(i);	// or s1[i]		Apple
	std::cout << std::endl;
	*/

	/*
	//Range-based loop
	for (char c : s1)
		std::cout << c << " ";						//	A p p l e
	std::cout << std::endl;
	*/

	/*
	//Substring
	std::cout << "\nSubstring" << "\n----------------------------------" << std::endl;
	s1 = "This is a test";

	std::cout << s1.substr(0, 4) << std::endl;						//This
	std::cout << s1.substr(5, 2) << std::endl;						//is
	std::cout << s1.substr(0, 2) << s1.substr(11, 1) << std::endl;	//The
	std::cout << s1.substr(10, 4) << std::endl;						//test 
	*/

	/*
	//Erase characters
	std::cout << "\nErase" << "\n----------------------------------" << std::endl;

	s1 = "This is a test";
	s1.erase(0, 5);									//Erases "This" from s1 results in "is a test"
	std::cout << "s1 is now: " << s1 << std::endl;	//is a test
	*/

	/*
	//getline
	std::cout << "\nGetline" << "\n----------------------------------------" << std::endl;

	std::string fullName{};

	std::cout << "Enter your full name: ";
	std::getline(std::cin, fullName);

	std::cout << "Your full name is: " << fullName << std::endl;
	*/

	/*
	//Find
	std::cout << "\nfind" << "\n----------------------------------------" << std::endl;

	s1 = "The secret word is Truth";
	std::string word{};
	std::string answer{};

	std::cout << "Enter the word to find: ";
	std::cin >> word;

	size_t position = s1.find(word);
	if (position != std::string::npos)
		std::cout << "Found " << word << " at position: " << position << std::endl;
	else
		std::cout << "Sorry, " << word << " not found" << std::endl;
	*/

	std::cout << std::endl;
 	return 0;
}