#include <iostream>
#include <vector>
#include <string>

/*int main()
{
    int *p{};
    std::cout << "Value of p is: " << p << std::endl;       // normally it would be garbage data, but my IDE prevents me from initializing without a value
    std::cout << "Address of p is: " << &p << std::endl;    //  000000D3218FF5E8
    std::cout << "sizeof p is: " << sizeof p << std::endl;  //  the size of a pointer always remains the same, no matter the variable type it's pointing at
    p = nullptr;                                            // set p to point nowhere
    std::cout << "Value of p is: " << p << std::endl;       //  0

    int *p1{ nullptr };
    double *p2{ nullptr };
    unsigned long long *p3{ nullptr };
    std::vector <std::string> *p4{ nullptr };
    std::string *p5{ nullptr };

    int score{ 10 };
    double high_temp{ 100.7 };
    double low_temp{ 37.2 };

    int *score_ptr{ nullptr };

    score_ptr = &score;         //  Ok
    //score_ptr = &high_temp;   //  Compiler Error

    double *temp_ptr;

    temp_ptr = &high_temp;      // points to high_temp
    temp_ptr = &low_temp;      // points to low_temp
    temp_ptr = nullptr
}*/
/*
int main() {
    int num{ 10 };
    std::cout << "Value of num is: " << num << std::endl;
    std::cout << "Size of num is: " << sizeof num << std::endl;
    std::cout << "Address of num is: " << &num << std::endl;

    int* p{};
    std::cout << "\nValue of p is: " << p << std::endl;
    std::cout << "Size of p is: " << sizeof p << std::endl;
    std::cout << "Address of p is: " << &p << std::endl;

    p = nullptr;
    std::cout << "\nValue of p is: " << p << std::endl;

    int* p1{ nullptr };
    double* p2{ nullptr };
    unsigned long long* p3{ nullptr };
    std::vector<std::string>* p4{ nullptr };
    std::string* p5{ nullptr };

    std::cout << "\nSize of p1 is: " << sizeof p1 << std::endl;
    std::cout << "Size of p2 is: " << sizeof p2 << std::endl;
    std::cout << "Size of p3 is: " << sizeof p3 << std::endl;
    std::cout << "Size of p4 is: " << sizeof p4 << std::endl;
    std::cout << "Size of p5 is: " << sizeof p5 << std::endl;

    int score{ 10 };
    double high_temp{ 100.7 };

    int* score_ptr{ nullptr };

    score_ptr = &score;
    std::cout << "\nValue of score is: " << score << std::endl;
    std::cout << "Address of score is: " << &score << std::endl;
    std::cout << "Value of score_ptr is: " << score_ptr << std::endl;       // Score Pointer is pointing to the Score's address

    std::cout << std::endl;
    return 0;
}*/
/*
int main() {
    int score{ 100 };
    int* score_ptr{ &score };

    std::cout << score_ptr << std::endl;
    std::cout << *score_ptr << std::endl;   // Adding the * after a pointer has been initialized dereferences a pointer, which means it'll actually show/affect the value of what it's pointing at

    *score_ptr = 200;
    std::cout << score_ptr << std::endl;
    std::cout << *score_ptr << std::endl;       // 200
    std::cout << score << std::endl;            // 200
    std::cout << std::endl;

    double high_temp{ 100.7 };
    double low_temp{ 37.4 };
    double* temp_ptr{ &high_temp };

    std::cout << *temp_ptr << std::endl;        // 100.7

    temp_ptr = &low_temp;

    std::cout << *temp_ptr << std::endl;        // 37.4
    std::cout << std::endl;

    std::string name{ "Carlos" };
    std::string* string_ptr{ &name };

    std::cout << *string_ptr << std::endl;      // Carlos

    name = "Polo";

    std::cout << *string_ptr << std::endl;      // Polo
    std::cout << std::endl;


    return 0;
}*/
/*
int main() {
    int score{ 100 };
    int* score_ptr{ &score };

    std::cout << *score_ptr << std::endl;       // 100

    *score_ptr = 200;

    std::cout << *score_ptr << std::endl;       // 200
    std::cout << score << std::endl;            // 200

    std::cout << "\n--------------------" << std::endl;

    double high_temp{ 100.7 };
    double low_temp{ 37.4 };
    double* temp_ptr{ &high_temp };

    std::cout << *temp_ptr << std::endl;        // 100.7
    temp_ptr = &low_temp;
    std::cout << *temp_ptr << std::endl;           // 37.4

    std::cout << "\n--------------------" << std::endl;

    std::string name{ "Charles" };
    std::string* string_ptr{ &name };

    std::cout << *string_ptr << std::endl;      // Charles
    name = "Antonio";
    std::cout << *string_ptr << std::endl;      // Antonio

    std::cout << "\n--------------------" << std::endl;

    std::vector <std::string> dogs{ "Chip", "Dale", "Elvis" };
    std::vector <std::string>* vector_ptr{ nullptr };

    vector_ptr = &dogs;

    std::cout << "First dog: " << (*vector_ptr).at(0) << std::endl;     // Dale

    std::cout << "Dogs: ";
    for (auto dogs : *vector_ptr)
        std::cout << dogs << " ";
    std::cout << std::endl;

    return 0;
}*/
/*
//Dynamic Memory Allocation
int main() {
   
    int* int_ptr{nullptr};
    int_ptr = new int;                  // allocate an integer on the heap
    std::cout << int_ptr << std::endl;  // 0000013353FA6A20
    std::cout << *int_ptr << std::endl; // -842150451 - garbage data
    *int_ptr = 100;
    std::cout << *int_ptr << std::endl; // 100
    delete int_ptr;                     // frees the allocated storage
   //array examples
    int* array_ptr{ nullptr };
    int size{};

    std::cout << "How big do you want the array?";
    std::cin >> size;

    array_ptr = new int[size];          //allocate array on the heap

    delete[] array_ptr;                 // frees allocated space;
    return 0;
}*/
/*
int main() {

    int* int_ptr{ nullptr };
    int_ptr = new int;
    std::cout << int_ptr << std::endl;  // Direction where it lives on the heap, has no name, no way to get to it except for the pointer (ptr)
    delete int_ptr;                     // Make sure to always delete it or you'll get a memory leak

    size_t size{0};
    double* temp_ptr{ nullptr };

    std::cout << "How many temperatures do you need? ";
    std::cin >> size;

    temp_ptr = new double[size];

    std::cout << temp_ptr << std::endl;

    delete[] temp_ptr;

    std::cout << std::endl;
    return 0;
}*/
/*
//Array and Pointers
int main() {

    int scores[]{ 100, 95, 89 };

    std::cout << "Value of scores: " << scores << std::endl;

    int* score_ptr{ scores };
    std::cout << "Value of score_ptr: " << score_ptr << std::endl;

    std::cout << "\nArray subscript notation ----------" << std::endl;
    std::cout << scores[0] << std::endl;
    std::cout << scores[1] << std::endl;
    std::cout << scores[2] << std::endl;

    scores[0] += 1;

    std::cout << "\nPointer subscript notation ----------" << std::endl;
    std::cout << score_ptr[0] << std::endl;
    std::cout << score_ptr[1] << std::endl;
    std::cout << score_ptr[2] << std::endl;

    score_ptr[0] += 1;

    std::cout << "\nPointer offset notation ----------" << std::endl;
    std::cout << *score_ptr << std::endl;
    std::cout << *(score_ptr + 1) << std::endl;
    std::cout << *(score_ptr + 2) << std::endl;

    *score_ptr += 1;

    std::cout << "\nArray offset notation ----------" << std::endl;
    std::cout << *scores << std::endl;
    std::cout << *(scores + 1) << std::endl;
    std::cout << *(scores + 2) << std::endl;

    std::cout << *scores + 1 << std::endl;

    std::cout << std::endl;
    return 0;
}*/

//Pointer Arithmetic
int main() {

    int scores[]{ 100, 95, 89, 68, -1 };    // the -1 is a sentinel value, used as a terminator
    int* score_ptr{ scores };

    while (*score_ptr != -1) {
        std::cout << *score_ptr << std::endl;
        score_ptr++;        // this is pointing to the next int memory location within the pointer
    }

    std::cout << "\n--------------------" << std::endl;
    score_ptr = scores;
    while (*score_ptr != -1)
        std::cout << *score_ptr++ << std::endl; // More effective cause it dereferences in the same line instead of dividing the task

    std::cout << "\n--------------------" << std::endl;
    std::string s1{ "Carlos" };
    std::string s2{ "Carlos" };
    std::string s3{ "Polo" };

    std::string* p1{ &s1 };
    std::string* p2{ &s2 };
    std::string* p3{ &s1 };

    std::cout << std::boolalpha;    // boolalpha modifier makes it so it prints out true or false instead of 1 or 0s
    std::cout << p1 << " == " << p2 << ": " << (p1 == p2) << std::endl;  // false
    std::cout << p1 << " == " << p3 << ": " << (p1 == p3) << std::endl; // true

    std::cout << *p1 << " == " << *p2 << ": " << (*p1 == *p2) << std::endl;  // true
    std::cout << *p1 << " == " << *p3 << ": " << (*p1 == *p3) << std::endl; // true

    p3 = &s3;       //point to Polo
    std::cout << *p1 << " == " << *p3 << ": " << (*p1 == *p3) << std::endl; //false

    std::cout << "\n--------------------" << std::endl;
    char name[]{ "Carlos" };
    char* char_ptr1{ nullptr };
    char* char_ptr2{ nullptr };

    char_ptr1 = &name[0];   //C
    char_ptr2 = &name[3];    //l

    std::cout << "In the string " << name << ", " << *char_ptr2 << " is " << (char_ptr2 - char_ptr1) << " characters away from " << *char_ptr1 << std::endl;

    std::cout << std::endl;
    return 0;
}