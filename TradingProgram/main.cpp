// Updated C++ Template.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>

bool appOn{ true };

static void printMenu()
{
	// 1 print help
	std::cout << "1: Print help " << std::endl;
	// 2 print exchange stats
	std::cout << "2: Print exchange stats " << std::endl;
	// 3 make an offer
	std::cout << "3: Make an offer " << std::endl;
	// 4 make a bid
	std::cout << "4: Make a bid " << std::endl;
	// 5 print wallet
	std::cout << "5: Print Wallet " << std::endl;
	// 6 continue
	std::cout << "6: Continue " << std::endl;
	// 7 exit program
	std::cout << "7: Exit " << std::endl;
	std::cout << "=============\n" << std::endl;
}

void invalidChoice() 
{
	std::cout << "Invalid Choice. Please choose a number between 1 - 7." << std::endl;
}

void printHelp()
{
	std::cout << "Help - your aim is to make money. Analyze the market and make bids and offers." << std::endl;
}

void printMarketStats()
{
	std::cout << "Market looks good." << std::endl;
}

void enterOffer()
{
	std::cout << "Make an offer - enter the amount." << std::endl;
}

void enterBid()
{
	std::cout << "Make a bid - enter the amount." << std::endl;
}

void printWallet()
{
	std::cout << "Your wallet is empty. " << std::endl;
}

void goToNextTimeframe()
{
	std::cout << "Going to next timeframe. " << std::endl;
}

void exitProgram()
{
	std::cout << "Exiting Program. " << std::endl;
	appOn = false;
}

int getUserOption()
{
	int userOption;
	std::cout << "Type in 1-7 " << std::endl;
	std::cin >> userOption;
	std::cout << "\nYou chose: " << userOption << std::endl;
	return userOption;
}

void processUserOption(int userOption)
{
	switch (userOption)
	{
	case 0:
		invalidChoice();
		break;
	case 1:
		printHelp();
		break;
	case 2:
		printMarketStats();
		break;
	case 3:
		enterOffer();
		break;
	case 4:
		enterBid();
		break;
	case 5:
		printWallet();
		break;
	case 6:
		goToNextTimeframe();
		break;
	case 7:
		exitProgram();
		break;
	}
}

int main()
{
	double price = 5319.450228;
	double amount = 0.00020075;
	std::string timestamp{ "2020/03/17 17:01:24.884492" };
	std::string product{ "BTC/USDT" };
	enum class OrderBookType{bid, ask};
	OrderBookType orderType = OrderBookType::bid;

	while (appOn == true)
	{
		printMenu();
		int userOption = getUserOption();
		processUserOption(userOption);
	}
    return 0;
}

