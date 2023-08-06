#include <iostream>
using namespace std;

void printIntroduction()
{
    cout << "Hi! Please enter the amount of miles you wish to convert into kilometers." << endl;
}

float mileToKilometer(float x)
{
    cin >> x;
    return x * 1.60934;
}

float average(float x, float y)
{
    return (x + y) / 2;
}