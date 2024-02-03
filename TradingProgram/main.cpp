// Updated C++ Template.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>

enum class OrderBookType { bid, ask };
bool appOn{ true };

class OrderBookEntry 
{
	public:
		OrderBookEntry(	double _price,
						double _amount,
						std::string _timestamp,
						std::string _product,
						OrderBookType _orderType)
		//	An Initiation list
		:	price(_price),
			amount(_amount),
			timestamp(_timestamp),
			product(_product),
			orderType(_orderType)
		{	

		}

		double price;
		double amount;  
		std::string timestamp;
		std::string product;
		OrderBookType orderType;
};

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
	/*
	double price = 5319.450228;
	double amount = 0.00020075;
	std::string timestamp{ "2020/03/17 17:01:24.884492" };
	std::string product{ "BTC/USDT" };
	OrderBookType orderType = OrderBookType::bid;*/

	/*std::vector<double> prices;
	std::vector<double> amounts;
	std::vector<std::string> timestamps;
	std::vector<std::string> products;
	std::vector<OrderBookType> orderTypes;

	prices.push_back(5319.450228);
	amounts.push_back(0.00020075);
	timestamps.push_back("2020/03/17 17:01:24.884492");
	products.push_back("BTC/USDT");
	orderTypes.push_back(OrderBookType::bid);

	std::cout << "prices: " << prices[0] << std::endl;
	std::cout << "amounts: " << amounts[0] << std::endl;
	std::cout << "timestamps: " << timestamps[0] << std::endl;
	std::cout << "products: " << products[0] << std::endl;
	
	while (appOn == true)
	{
		printMenu();
		int userOption = getUserOption();
		processUserOption(userOption);
	}
	*/

	OrderBookEntry order1{ 10000 ,
							0.002,
							"2020/03/17 17:01:24.884492",
							"BTC/USDT", OrderBookType::bid };

	std::cout << "The price is " << order1.price << std::endl;

	return 0;
}

