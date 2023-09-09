#include <iostream>
#include <climits>
#include <vector>

using namespace std;

int main(){

    int num{};
    const int min {10};
    const int max {100};

    cout << "Enter a number between " << min << " and " << max << ": ";
    cin >> num;

    if (num >= min){
        cout << "\n=========== If statement 1 ============="  << endl;
        cout << num << " is greater than " << min << endl;

        int diff {num - min};
        cout << num << " is " << diff << " greater than " << min << endl;
    }

    if (num <= max){
        cout << "\n=========== If statement 2 ============="  << endl;
        cout << num << " is less than or equal to " << max << endl;

        int diff {max - num};
        cout << num << " is " << diff << " less than " << max << endl;
    }

    if (num >= min && num <=max){
        cout << "\n=========== If statement 3 ============="  << endl; 
        cout << num << " is in range" << endl;
        cout << "This means statements 1 and 2 must also display!!" << endl;  
    }

    if (num == min || num == max){
        cout <<  "\n=========== If statement 4 ============="  << endl;
        cout << num << " is right on a boundary " << endl;
        cout << "This means all 4 statements display" << endl;
    }
cout << endl;


/* vector <int> roomAmount [3] {0};
const string roomSize [3] {"small", "medium", "large"};
const double roomPrice[3] {25.00, 30.00, 35.00};
double taxPercentage{0.06};
double saleTax {0};
double totalEstimate{0};
int estimateExpiry{30}; //days

//Prompt the user to enter the number of rooms

cout << "Hello, welcome to Frank's Carpet Cleaning Service!\n" << endl;
for (int i = 0; i < 3; i++){
cout << "How many " << roomSize[i]<< " rooms would you like cleaned? ";
cin >> roomAmount[i];   
}

cout << "\nEstimate for carpet cleaning service:" << endl;
// Display number of rooms
for (int i = 0; i < 3; i++){
cout << "Number of "<< roomSize[i]<<" rooms: "<< roomAmount[i]<<endl;
}

//Display price per rooms
for (int i = 0; i < 3; i++){
cout << "Price per "<< roomSize[i]<<" room: $"<< roomPrice[i]<<endl;
}

//Display cost: (number of rooms * price per room)
for (int i = 0; i < 3; i++){
totalEstimate += roomAmount[i] * roomPrice[i];
}
cout << "Cost: $" << totalEstimate <<endl;

//Display tax: number of rooms * price per room * tax rate
saleTax = totalEstimate * taxPercentage;
cout << "Tax: $" << saleTax <<endl;
cout << "====================================================" << endl;
//Display total estimate: (number of rooms * price per room) + (number of room * price per room * tax rate)
cout << "Total estimate: $" << totalEstimate + saleTax <<endl;
//Display estimate expiration time 
cout << "This estimate is valid for " << estimateExpiry << " days" << endl;

cout << endl; */

    return 0;
}