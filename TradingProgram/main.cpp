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

double computeAveragePrice(std::vector<OrderBookEntry>& entries) {
	double averagePrice = 0;

	for (OrderBookEntry& entry : entries)	{
		averagePrice += entry.price;
	}
	return averagePrice / entries.size();
}

double computeLowPrice(std::vector<OrderBookEntry>& entries) {
	double lowestPrice = entries.at(0).price;
	for (OrderBookEntry& entry : entries) {
		if (entry.price < lowestPrice) {
			lowestPrice = entry.price;
		}
	}
	return lowestPrice;
}

double computeHighPrice(std::vector<OrderBookEntry>& entries) {
	double highestPrice = entries.at(0).price;
	for (OrderBookEntry& entry : entries) {
		if (entry.price > highestPrice) {
			highestPrice = entry.price;
		}
	}
	return highestPrice;
}


double computePriceSpread(std::vector<OrderBookEntry>& entries) {
	double lowestPrice = entries.at(0).price;
	double highestPrice = entries.at(0).price;

	for (OrderBookEntry& entry : entries) {
		if (entry.price < lowestPrice) {
			lowestPrice = entry.price;
		}
		if (entry.price > highestPrice) {
			highestPrice = entry.price;
		}
	}
	return highestPrice - lowestPrice;
}

int main()
{

	std::vector<OrderBookEntry> entries;
	
	entries.push_back(	OrderBookEntry{10000,
										0.002,
										"2020/03/17 17:01:24.884492",
										"BTC/USDT",
										OrderBookType::bid}	);

	entries.push_back(	OrderBookEntry{ 5000,
										0.006,
										"2024/03/17 17:01:24.894492",
										"BTC/USDT",
										OrderBookType::ask}	);

	entries.push_back(OrderBookEntry{	2020,
										0.006,
										"2024/03/17 17:01:24.894492",
										"BTC/USDT",
										OrderBookType::bid });

	entries.push_back(OrderBookEntry{ 40,
									0.40,
									"2024/03/17 17:01:24.894492",
									"BTC/USDT",
									OrderBookType::bid });

	for (const auto& entry : entries) {
		std::cout << "Price: " << entry.price
			<< ", Amount: " << entry.amount
			<< ", Timestamp: " << entry.timestamp
			<< ", Product: " << entry.product << std::endl;
	}

	std::cout << "The average price is " << computeAveragePrice(entries) << "." << std::endl;
	std::cout << "The lowest price is " << computeLowPrice(entries) << "." << std::endl;
	std::cout << "The highest price is " << computeHighPrice(entries) << "." << std::endl;
	std::cout << "The Price Spread is " << computePriceSpread(entries) << "." << std::endl;
	return 0;
}

