#include <iostream>
using namespace std;

int main()
{
    int x{-1};
    while (x)
    {
        x--;
        std::cout << x << endl;
    }
}