#include <iostream>
#include <climits>
#include <vector>
#include <cstdlib>
#include <ctime>  

int rollDie(int i)
{
    int roll;
    int min = 1; // the min number a die can roll is 1
    int max = i;// this->dieSize; // the max value is the die size

    srand(time(nullptr));
    roll = rand() % (max - min + 1);

    return roll;
}


using namespace std;

int main() {
    srand(time(0));
    char continuePlaying{};

    int attackRoll{ 20 };
    int playerAttackMod{ 5 };
    int longswordRoll{ 8 };
    int longswordMod{ 2 };
    int playerArmor{ 16 };
    int maxPlayerHP{ 12 };
    int currentPlayerHP{ 12 };

    int goblinAttackMod{ 1 };
    int shortswordRoll{ 4 };
    int goblinArmor{ 13 };
    int maxGoblinHP{ 6 };
    int currentGoblinHP{ 6 };


    cout << "You are a brave warrior hailing from the town of Sandpoint, in a land called Varisia on the coast of the great Steaming Sea.\nLife in the small town is simple, but also hard—the surrounding wilderness is full of goblins and other monsters.\nLately, these monsters have been growing bolder, carrying off children and livestock from outlying farmsteads.\nIn desperation, the terrified townsfolk have turned to you for protection.\nThe mayor, a kindly woman named Kendra Deverin, has promised you a reward of 100 gold pieces if you can clear out a nearby dungeon where some of these creatures are said to live.\nIt’s a dangerous job, but you know in your heart that you’re up to the challenge.\nYou gather up your gear—a sturdy suit of chainmail armor and your father’s old longsword—and head off into the woods, following the crude map the mayor gave you.\nAfter several hours of walking, you arrive at a desolate hillside. Just up ahead is the darkened entrance to a tunnel. This must be the dungeon!" << endl;
    cout << "Will you gather up your courage and head inside? [Y/N]" << endl;
    cin >> continuePlaying;
    if (continuePlaying == 'Y' || continuePlaying == 'y')
    {
        cout << "You find yourself in a dark, dusty corridor heading down into the earth.\nAs you walk, the light from the entrance quickly fades to no more than a faint glow, and you are forced to use a torch to light your way.\nIn its flickering light, you can see that the corridor opens into a room just ahead.\nYou hear a quiet growl and draw your sword from its sheath." << endl;
        cout << "Suddenly your eyes detect movement—a pile of rags in the corner leaps up, revealing itself to be a vile goblin with warty green skin and a head shaped like a watermelon.\nIts filthy clothes are covered in bloodstains, and one hand still holds the roasted leg of a stolen sheep.\nIn its other hand is a wicked looking short sword. It snarls at you and charges." << endl;
        cout << "You are now in combat.\nYou know that the goblin is a nasty, evil creature that you must kill before you can continue.\nBoth you and the goblin take turns attacking one another." << endl;
        while (currentGoblinHP > 0 && currentPlayerHP > 0)
        {
            int playerAttack{ rollDie(attackRoll) + playerAttackMod };
            cout << "You are attacking:" << endl;
            cout << "You land a " << playerAttack << " on the dice!" << endl;
            if (playerAttack >= goblinArmor) {
                int i{ rollDie(longswordRoll) + longswordMod };
                cout << "Your attack lands a nasty blow on the goblin!" << endl;
                cout << "It deals " << i << " points of damage!" << endl;
                cout << "Goblin HP left : " << (currentGoblinHP -= i) << endl;
            }
            else
                cout << "You missed!" << endl;

            if (currentGoblinHP > 0 && currentPlayerHP > 0) {
                cout << "Now it's the goblin's turn to attack!" << endl;
                int goblinAttack{ rollDie(attackRoll) + goblinAttackMod };
                cout << "The goblin slashes at you with his shortsword!" << endl;
                cout << "They land a " << goblinAttack << " on the dice!" << endl;
                if (goblinAttack >= playerArmor) {
                    int i{ rollDie(shortswordRoll) };
                    cout << "The goblin's slash lands and deals " << i << " points of damage!" << endl;
                    cout << "Your current health : " << (currentGoblinHP -= i) << "/" << maxPlayerHP;
                }
                else
                    cout << "They missed!" << endl;
            }
        }
        cout << "With a final, desperate lunge, you slide past the goblin’s guard and send your blade plunging into its chest.\nThe goblin snarls one last time in pain and frustration, then its bulbous eyes close and it slumps to the ground, dead.\nTaking a look through a filthy pouch on its belt, you find 7 gold pieces and a small glass vial filled with red liquid.\nWritten on the cap is the word “heal.”\nThis must be a potion of healing!" << endl;
        cout << "Battle Stats: " << endl;
        cout << "Your health: " << currentPlayerHP << endl;;
        cout << "Items earned: Potion of healing and 7 gold pieces." << endl;
    }



    // char letterGrade;

    // cout << "Enter the letter grade you expect on the test: ";
    // cin >> letterGrade;

    // switch(letterGrade){
    //     case 'a':
    //     case 'A':
    //         cout << "You'll need a 90 or above, so study hard!" << endl;
    //         break;
    //     case 'b':
    //     case 'B': 
    //         cout << "You'll need 80 to 89, go study!"<< endl;
    //         break;
    //     case 'c':
    //     case 'C':
    //         cout << "You'll need 70 to 79 for an average grade." << endl;
    //         break;
    //     case 'd':
    //     case 'D':
    //         cout << "Hmm, you should probably aim higher, all you need is a 60 to 69" << endl;
    //         break;
    //     case 'f':
    //     case 'F':
    //     {
    //         char confirm{};
    //         cout << "Are you sure you want an F?\nType (Y/N):";
    //         cin >> confirm;
    //         if (confirm == 'y'|| confirm == 'Y')
    //             cout << "You really shouldn't be aiming for an F, buddy, but I guess you don't have to study..." << endl;
    //         else if (confirm == 'n' || confirm == 'N')
    //             cout << "Good, then you shoudl go study!" << endl;
    //         else
    //             cout << "You aren't making sense right now!" << endl;
    //         break;
    //     }

    //     default:
    //         cout << "Sorry, that's not a valid grade." << endl;
    // }

    /*
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
    cout << endl; */


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