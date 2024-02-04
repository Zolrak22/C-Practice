/*
#include <iostream>
#include<cmath>

int main()
{
    double num{};

    std::cout << "Enter a number: ";
    std::cin >> num;

    std::cout << "The square root of " << num << " is: " << sqrt(num) << std::endl;
    std::cout << "The cube roof of " << num << " is: " << cbrt(num) << std::endl;

    std::cout << "The sine of " << num << " is: " << sin(num) << std::endl;
    std::cout << "The cosine of " << num << " is: " << cos(num) << std::endl;

    std::cout << "The ceiling of " << num << " is: " << ceil(num) << std::endl;
    std::cout << "The floor of " << num << " is: " << floor(num) << std::endl;
    std::cout << "The round of " << num << " is: " << round(num) << std::endl;

    double power{};
    std::cout << "\nEnter a power to raise " << num << " to: ";
    std::cin >> power;
    std::cout << num << " raise to the " << power << " power is: " << pow(num, power) << std::endl;

    std::cout << std::endl;
    return 0;
}
*/

/*
#include <iostream>
#include <cstdlib>      // required for rand()
#include <ctime>        // required for time()

int main() {
    int randomNumber{};
    size_t count{ 10 };     //number of random numbers to generate
    int min{ 1 };           // lower bound (inclusive)
    int max{ 6 };           // upper bound (inclusive)

    // seed the random number generator
    // if you don't seed the generator you will get the same sequence of random numbers in every turn

    std::cout << "Rand_Max on my system is: " << RAND_MAX << std::endl;
    srand(time(nullptr));

    for (size_t i{ 1 }; i <= count; ++i) {
        randomNumber = rand() % max + min;      // generates a random number from the remainder plus minimum [min, max]
        std::cout << randomNumber << std::endl;
    }
    return 0;
}*/

/*
#include <iostream>
void name() {
    std::cout << " Chucky bunny";
}
void iCare() {
    std::cout << "Hello";
    name();
    std::cout <<", know that we care about you!!!" << std::endl;
}

int main() {
    for (int i{ 1 }; i <= 10; ++i) 
        iCare();

    return 0;
}
*/

/*
#include <iostream>

//Function prototypes
double calcVolumeCylinder(double radius, double height);
double calcAreaCircle(double radius);
void areaCircle();
void volumeCylinder();

const double pi{ 3.14159 };


int main() {

    areaCircle();
    volumeCylinder();
    return 0;
}

double calcVolumeCylinder(double radius, double height) {
    // return pi * radius * radius * height;
    return calcAreaCircle(radius) * height;
}
double calcAreaCircle(double radius) {
    return pi * radius * radius;
}

void areaCircle() {
    double radius{};
    std::cout << "\nEnter the radius of the circle: ";
    std::cin >> radius;

    std::cout << "The area of a circle with radius " << radius << " is " << calcAreaCircle(radius) << std::endl;
}

void volumeCylinder() {
    double radius{}, height{};
    std::cout << "\nEnter the radius of the cylinder: ";
    std::cin >> radius;
    std::cout << "\nEnter the height of the cylinder: ";
    std::cin >> height;

    std::cout << "The volume of a cylinder with radius " << radius << " and height " << height << " is " << calcVolumeCylinder(radius, height) << std::endl;
}   */

/*#include <iostream>

void helloWorld(std::string name, int age);

int main() {
    helloWorld("Neeta", 10);
    return 0;
}




void helloWorld(std::string name, int age) 
{
    std::cout << "Hello " + name + ",   welcome to Jesus' bar, it's lovely to meet you. " << std::endl;
    if (age >= 21)
        std::cout << "It's a good thing you are " << age << ", or I wouldn't be able to offer you a drink." << std::endl;
    else
        std::cout << "I see, so you are " << age << ", maybe come back when you are a few years older" << std::endl;
}*/
/*
#include <iostream>                                // This practice proves that the functions create local copies of the variables instead of affecting the direct one
#include <string>
#include <vector>

void pass_by_value1(int num);
void pass_by_value2(std::string s);
void pass_by_value3(std::vector<std::string> v);
void print_vector(std::vector<std::string> v);

void pass_by_value1(int num) {
    num = 1000;
}

void pass_by_value2(std::string s) {
    s = "Changed";
}

void pass_by_value3(std::vector<std::string> v) {
    v.clear();  // delete all vector elements
}

void print_vector(std::vector<std::string> v) {
    for (auto s : v)
        std::cout << s << " ";
    std::cout << std::endl;
}

int main() {
    int num{ 10 };
    int another_num{ 20 };

    std::cout << "num before calling pass_by_value1: " << num << std::endl;
    pass_by_value1(num);
    std::cout << "num after calling pass_by_value1: " << num << std::endl;


    std::cout << "\nanother_num before calling pass_by_value1: " << another_num << std::endl;
    pass_by_value1(another_num);
    std::cout << "another_num after calling pass_by_value1: " << another_num << std::endl;

    std::string name{ "Frank" };
    std::cout << "\nname before calling pass_by_value2: " << name << std::endl;
    pass_by_value2(name);
    std::cout << "\nname after calling pass_by_value2: " << name << std::endl;

    std::vector<std::string> stooges{ "Larry", "Moe", "Curly" };
    std::cout << "\nstooges before calling pass_by_value3: ";
    print_vector(stooges);
    pass_by_value3(stooges);
    std::cout << "stooges after calling pass_by_value3: ";
    print_vector(stooges);


    std::cout << std::endl;
    return 0;
}*/

/*
#include <iostream>
#include <iomanip>
#include <string>

double calc_cost(double base_cost = 100, double tax_rate = 0.06, double shipping = 3.50);

void greeting(std::string name, std::string prefix = "Mr.", std::string suffix = "");

double calc_cost(double base_cost, double tax_rate, double shipping) {
    return base_cost += (base_cost * tax_rate) + shipping;
}

void greeting(std::string name, std::string prefix, std::string suffix) {
    std::cout << "Hello " << prefix + " " + name + " " + suffix << std::endl;
}

int main() {
    double cost{ 0 };
    cost = calc_cost(100.0, 0.08, 4.25);             // will use no defaults 100 + 8 + 4.25

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Cost is: " << cost << std::endl;  // 112.25

    cost = calc_cost(100.0, 0.08);                   // will use default shipping 100 + 8 + 3.50
    std::cout << "Cost is: " << cost << std::endl;  // 111.50

    cost = calc_cost(200.0);                        // Will use default tax & shipping 200 + 12 +3.5
    std::cout << "Cost is: " << cost << std::endl;  // 215.50

    cost = calc_cost();
    std::cout << "Cost is: " << cost << std::endl;  // 100 + 6 + 3.50, defaulting to 112.25
    std::cout << std::endl;

    greeting("Glenn Jones", "Dr.", "M.D.");
    greeting("James Rogers", "Professor", "Ph.D.");
    greeting("Frank Miller", "Dr.");
    greeting("William Smith");
    greeting("Mary Howard", "Mrs.", "Ph.D.");
    greeting("Jack Wells", "Lord", "Ph.D.");

    std::cout << std::endl;
    return 0;
*/

/*
//Function Overloading
#include <iostream>
#include <string>
#include <vector>

void print(int);
void print(double);
void print(std::string);
void print(std::string, std::string);
void print(std::vector<std::string>);

void print(int num) {
    std::cout << "Print int: " << num << std::endl;
}

void print(double num) {
    std::cout << "Print double: " << num << std::endl;
}

void print(std::string s) {
    std::cout << "Print string: " << s << std::endl;
}

void print(std::string s, std::string t) {
    std::cout << "Print string: " << s << " and " << t << std::endl;
}

void print(std::vector<std::string> v) {
    std::cout << "Printing vector of strings: ";
    for (auto s : v)
        std::cout << s + " ";
    std::cout << std::endl;
}

int main() {

    print(100);                 // int
    print('A');                 // characters are always promoted to int, should print 65 as per ASCII ('A')
    std::cout << std::endl;

    print(123.5);               // double
    print(123.3F);              // Float will be promoted to double to match function
    std::cout << std::endl;

    print("C-style string");    // C-style string is converted to a C++ string
    std::cout << std::endl;

    std::string s{ "C++ string" };
    print(s);                   // C++ string
    std::cout << std::endl;

    print("C-style string", s); // First argument is converted toa  C++ string

    std::vector<std::string> three_stooges{ "Larry", "Moe", "Curly" };
    print(three_stooges);

    std::cout << std::endl;
    return 0;
}
*/

//Passing Arrays to functions
/*
#include <iostream>

void print_array(const int arr[], size_t size);
void set_array(int arr[], size_t size, int value);

void print_array(const int arr[], size_t size) { // const
    for (size_t i{ 0 }; i < size; ++i)
        std::cout << arr[i] << " ";
    std::cout << std::endl;
}

// set each array element to value
void set_array(int arr[], size_t size, int value) {
    for (size_t i{ 0 }; i < size; ++i)
        arr[i] = value;
}

int main() {
    int my_scores[]{ 100, 98, 90, 86, 84 };

    print_array(my_scores, 5);
    set_array(my_scores, 5, 100);
    print_array(my_scores, 5);

    std::cout << std::endl;
    return 0;
}
*/
/*
#include <iostream>

void scale_number(int& num);            //prototype

int main() {
    int number{ 1000 };
    scale_number(number);              //call
    std::cout << number << std::endl;  // 100
    return 0;
}

void scale_number(int& num) {           // definition
    if (num > 100)
        num = 100;
}
*/


/*
#include <iostream>         // example of a pass by reference, it changes the original instead of a copy by adding the & symbol before the variable

void swap(int &a, int &b);

int main() {
    int x{ 10 }, y{ 20 };
    std::cout << x << " " << y << std::endl;    // 10 20
    swap(x, y); 
    std::cout << x << " " << y << std::endl;    // 20 10
    return 0;
}

void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}
*/

/*
#include <iostream>     // vector example - pass by value , because it makes a copy of the list, it could have performance issues if the list is big enough, instead we should use pass by reference
#include <vector>

void print(std::vector <int> v);

int main() {
    std::vector<int> data{ 1,2,3,4,5 };
    print(data);                        // 1 2 3 4 5
    return 0;
}

void print(std::vector <int> v) {
    for (auto num : v)
        std::cout << num << std::endl;
}
*/

/*
#include <iostream>     // Vector Example - pass by reference output is the same as before, but we avoid the storage issue, however we still have a problem in that the values could be deleted that's why we should use the pass by const reference
#include <vector>

void print(std::vector <int> &v);

int main() {
    std::vector<int> data{ 1,2,3,4,5 };
    print(data);                        // 1 2 3 4 5
    return 0;
}

void print(std::vector <int> &v) {
    for (auto num : v)
        std::cout << num << std::endl;
}
*/
/*
#include <iostream>     //Vector Example - Pass by const reference
#include <vector>

void print(const std::vector <int> &v);

int main() {
    std::vector<int> data{ 1,2,3,4,5 };
    print(data);                        // 1 2 3 4 5
    return 0;
}

void print(const std::vector <int> &v) {
    //v.at(0) = 200;                          // this would have an error
    for (auto num : v)
        std::cout << num << std::endl;
}
*/

/*
//Section 11
// Pass-by-reference

#include <iostream>
#include <string>
#include <vector>

void pass_by_ref1(int& num);
void pass_by_ref2(std::string &s);
void pass_by_ref3(std::vector <std::string> &v);
void print_vector(const std::vector <std::string> &v);  //const

void pass_by_ref1(int& num) {
    num = 1000;
}

void pass_by_ref2(std::string &s) {
    s = "Changed";
}

void pass_by_ref3(std::vector <std::string>& v) {
    v.clear();  //deletes all vector elements
}

void print_vector(const std::vector <std::string>& v) {
    for (auto s : v)
        std::cout << s << " ";
    std::cout << std::endl;
}

int main() {
    int num{ 10 };
    int another_num{ 20 };

    std::cout << "num before calling pass_by_ref1: " << num << std::endl;
    pass_by_ref1(num);
    std::cout << "num after calling pass_by_ref1: " << num << std::endl;

    std::cout << "\nanother_num before calling pass_by_ref1: " << another_num << std::endl;
    pass_by_ref1(another_num);
    std::cout << "another_num after calling pass_by_ref1: " << another_num << std::endl;

    std::string name{ "Carlos" };
    std::cout << "\n name before pass_by_ref2: " << name << std::endl;
    pass_by_ref2(name);
    std::cout << "name after pass_by_ref2: " << name << std::endl;

    std::vector<std::string> stooges{"Larry", "Moe", "Curly"};
    std::cout << "\nstooges before calling pass_by_ref3: ";
    print_vector(stooges);
    pass_by_ref3(stooges);                                  //RIP stooges, got cleared here
    std::cout << "stooges after calling pass_by_ref3: ";
    print_vector(stooges);                                  //So the list is printed empty

    std::cout << std::endl;
    return 0;
}
*/
/*
//Scope Rules Examples

#include <iostream>
#include <string>
#include <vector>

void local_example(int);
void global_example();
void static_local_example();

int num{ 300 };         //Global variable - declared outside any class or function

void global_example() {
    std::cout << "\nGlobal num is: " << num << " in global_example - start" << std::endl;
    num *= 2;
    std::cout << "Global num is: " << num << " in global_example - end" << std::endl;
}

void local_example(int x) {
    int num{ 1000 };    // Local to local_example
    std::cout << "\nLocal num is: " << num << " in local_example - start" << std::endl;
    num = x;
    std::cout << "Local num is: " << num << " in local_example - end" << std::endl;
    //num1 in main is not within scope so it can't be used here
}

void static_local_example() {
    static int num{ 5000 };         //local to static_local_example static - retains its value between calls, meaning that if you call a static int num again, it'll keep adding up instead of resetting to 5000
    std::cout << "\nLocal static num is : " << num << " in static_local_example - start" << std::endl;
    num += 1000;
    std::cout << "Local static num is : " << num << " in static_local_example - end" << std::endl;
}

int main() {
    int num { 100 };     //Local to main
    int num1{ 500 };     //Local to main

    std::cout << "local num is: " << num << " in main" << std::endl;

    {   // This creates a new level of scope
        int num{ 200 };  // Local to this inner block
        std::cout << "local num is: " << num << " in inner block inside main" << std::endl;
        std::cout << "Inner block in main can see out - num1: " << num1 << std::endl;
    }

    std::cout << "Local num is: " << num << "in main" << std::endl;

    local_example(10);
    local_example(20);

    global_example();   //Because it's global, it doesn't reset, meaning that it starts 300 then 600
    global_example();   // Then down here it's at 600 then 1200

    static_local_example();         //it starts at 5000, then adds 1000 for 6000
    static_local_example();         //It starts as 6000, even if the original says 500 because it's static, so then adds to 7000
    static_local_example();         //Like the previous one it keeps adding up so goes 7000 then 8000

    std::cout << std::endl;
    return 0;
}
*/

/*
//How Function Calls Work
#include <iostream>

void func2(int& x, int y, int z) {
    x += y + z;
}

int func1(int a, int b) {
    int result{};
    result = a + b;
    func2(result, a, b);
    return result;
}

int main() {
    int x{ 10 };
    int y{ 20 };
    int z{};
    z = func1(x, y);
    std::cout << z << std::endl;
    return 0;
}
    /*
    * What typically happens when main calls func1 (or any function calls another) ?
    * There are other ways to achieve the same results
    * 
    * Main:
    *   push space for the return value
    *   push space for the parameters
    *   push the return address
    *   transfer control to func1  (jump)
    * func1:
    *   push the address of the previous activation record
    *   push any register values that will need to be restored before returning to the caller
    *   perform the code in func1
    *   restore the register values
    *   restore the previous activation record (move the stack pointer)
    *   store any function result
    *   transfer control tot he return address (jump)
    * main:
    *   pop the parameters
    *   pop the return value
    */

//Recursive Functions
/*
//Recursion Factorial example
#include <iostream>

unsigned long long factorial(unsigned long long n) {
    if (n == 0)
        return 1;                           // base case
    return n * factorial(n - 1);             // recursive case
}

int main() {
    std::cout << factorial(30) << std::endl; // 6
    std::cout << factorial(8) << std::endl; // 40320
    std::cout << factorial(12) << std::endl; // 479001600
    std::cout << factorial(20) << std::endl; // 2432902008176640000
    return 0;
}
*/
/*
// Recursion Fibonacci example
#include <iostream>

unsigned long long fibonacci(unsigned long long n) {
    if (n <= 1)
        return n;                               // base case
    return fibonacci(n - 1) + fibonacci(n - 2); // recursion
}

int main() {
    std::cout << fibonacci(5) << std::endl;     // 5
    std::cout << fibonacci(30) << std::endl;    // 8382040
    std::cout << fibonacci(40) << std::endl;    // 102334155
    return 0;
}
*/

#include <iostream>

int main() {
    std::cout << 12345 % 10 << std::endl;
}
