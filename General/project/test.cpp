#include <iostream>
using namespace std;

void printIntroduction();
float average(float x, float y);
float mileToKilometer(float x);

int main()
{
    printIntroduction();
    float miles = mileToKilometer(0);
    cout << "It results in "<< miles << " kilometers."<< endl;
    float z = average(miles, 90);
    cout << "The average of " << miles << "and 90km is: " << z << " kilometers"<< endl;
    return 0;
}