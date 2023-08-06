#include <iostream>
#include <string>
#include <vector>
using namespace std;

enum class OrderBookType{bid, ask};

class OrderBookEntry 
{
	public:
		OrderBookEntry(
			double _price,
			double _amount,
			std::string _timestamp,
			std::string _product,
			OrderBookType _orderType)
	//An initialization list
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

using namespace std;
bool appOn {true};

void printMenu()
{
	// 1 print help
	cout << "1: Print help " << endl;
	// 2 print exchange stats
	cout << "2: Print exchange stats " << endl;
	// 3 make an offer
	cout << "3: Make an offer " << endl;
	// 4 make a bid
	cout << "4: Make a bid " << endl;
	// 5 print wallet
	cout << "5: Print Wallet " << endl;
	// 6 continue
	cout << "6: Continue " << endl;
	// 7 continue
	cout << "7: Exit " << endl;
	cout << "=============" << endl;
}

void printHelp()
{
	cout << "Help - your aim is to make money. Analyse the market and make bids and offers." << endl;
}

void printMarketStats()
{
	cout << "Market looks good." << endl;
}

void enterOffer()
{
	cout << "Make an offer - enter the amount." << endl;
}

void enterBid()
{
	cout << "Make a bid - enter the amount." << endl;
}

void printWallet()
{
	cout << "Your wallet is empty. " << endl;
}

void goToNextTimeframe()
{
	cout << "Going to next timeframe. " << endl;
}

void exitProgram()
{
	cout << "Exiting Program. " << endl;
	appOn = false;
}


int getUserOption()
{
	int userOption;
	cout << "Type in 1 - 7" << endl;	
	cin >> userOption;
	cout << "You chose: " << userOption << ":" << endl;
	return userOption;
}

void processUserOption (int userOption)
{
	switch (userOption)
	{
	case 0:
		cout << "Invalid Choice. Please choose a number between 1 - 7." << endl;
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

	/*double price = 5319.450228;
	double amount = 0.00020075;
	string timestamp{"2020/03/17 17:01:24.884492"};
	string product{"BTC/USDT"};
	//string orderType{"bid"};
	OrderBookType orderType = OrderBookType::bid; 

	vector<double> prices;
	vector<double> amounts;
	vector<string> timestamps;
	vector<string> products;
	vector<OrderBookType> orderTypes;

	prices.push_back(6555.01);
	amounts.push_back(2.001);
	timestamps.push_back("2020/03/17 17:01:24.884492");
	products.push_back("BTC/USDT");
	orderTypes.push_back(OrderBookType::bid);

	prices.push_back(110.01);
	amounts.push_back(20.001);
	timestamps.push_back("2020/03/17 17:01:24.884492");
	products.push_back("DOGE/USDT");
	orderTypes.push_back(OrderBookType::ask);

	cout << "prices: " << prices[0] << endl;
	cout << "amounts: " << amounts[1] << endl;
	cout << "timestamps: " << timestamps[1] << endl;
	cout << "products: " << products[1] << endl;

	while (appOn == true)
	{
		printMenu();
		int userOption = getUserOption();
		processUserOption(userOption);
	}*/

	vector<OrderBookEntry> orders;
	orders.push_back(	OrderBookEntry 
						{10000,
						0.02,
						"2020/03/17 17:01:24.884492",
						"BTC/USDT",
						OrderBookType::bid}	);
	orders.push_back(OrderBookEntry{30000,
									0.12,
									"2020/03/17 17:01:24.884492",
									"DOGE/USDT",
									OrderBookType::ask});

	//cout << "The price is " << orders[1].price << endl;

	for(OrderBookEntry& order : orders)
	{
		cout << "The price is " << order.price << endl;
	}

//++i prevents you from using a copy, so it's more efficient on loops
	for (unsigned int i = 0; i < orders.size(); ++i)
	{
		cout << "The price is " << orders[i].price << endl;
	}

	for (unsigned int i = 0; i < orders.size(); ++i)
	{
		cout << "The price is " << orders.at(i).price << endl;
	}

	return 0;
}