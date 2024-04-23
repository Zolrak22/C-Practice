 #include <iostream>
#include <cmath>
#include <cstdlib>
#include <string>
#include <vector>


void passByValue1(int num) {
    num = 1000; 
}

void passByValue2(std::string s) {
    s = "Changed";
}

void passByValue3(std::vector<std::string> v) {
    v.clear();
}

void printVector(std::vector<std::string> v) {
    for (auto s : v)
        std::cout << s << " ";
    std::cout << std::endl;
}

const double pi{ 3.14159 };

double calAreaCircle(double radius);
double calVolumeCylinder(double radius, double height);
void areaCircle();
void volumeCylinder();


int main()
{
    areaCircle();
    volumeCylinder();
    return 0; 
}

double calAreaCircle(double radius) {
    return pi * radius * radius;
}

double calVolumeCylinder(double radius, double height) {
    //return pi * radius * radius * height;
    return calAreaCircle(radius) * height;
}

void areaCircle() {
    double radius{};
    std::cout << "\nEnter the radius of the circle: ";
    std::cin >> radius;


    std::cout << "The area of a circle with radius " << radius << " is " << calAreaCircle(radius) << std::endl;

}
void volumeCylinder() {
    double radius{};
    double height{};
    std::cout << "\nEnter the radius of the cylinder: ";
    std::cin >> radius;
    std::cout << "\nEnter the height of the circle: ";
    std::cin >> height;

    std::cout << "The volume of a cylinder with radius " << radius << " and height " << height << " is " << calVolumeCylinder(radius, height) << std::endl;
}
