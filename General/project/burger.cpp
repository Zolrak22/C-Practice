#include <iostream>

using namespace std;

int main()
{
    cout << "Hello, welcome to Good Burger, home of the Good Burger!" << endl;
    cout << "\nHow many burgers would you like to order?";

    int numberOfBurgers{0};
    const double burgerPrice{3.99};
    const double taxPercent{0.07};
    const int estimateExpiry{21};

    cin >> numberOfBurgers;
    double costPreTaxes = burgerPrice * numberOfBurgers;
    double costPostTaxes = costPreTaxes * taxPercent;

    cout << "\nEstimate for purchase of burgers:" << endl;
    cout << "Number of burgers: $" << numberOfBurgers << endl;
    cout << "Price per burger: $" << burgerPrice << endl;
    cout << "Cost: $" << costPreTaxes << endl;
    cout << "Tax: $" << costPreTaxes * taxPercent << endl;
    cout << "====================================================================" << endl;
    cout << "Total Price: $" << costPreTaxes + costPostTaxes << endl;
    cout << "This estimate is valid for " << estimateExpiry << " days" << endl;
    cout << endl;
    return 0;
}