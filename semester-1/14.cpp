#include <cstdint>
#include <cstdlib>
#include <iostream>
#define PI 3.14
using namespace std;

float eval_area (unsigned r) {
    return  PI * r * r;
}

float eval_c (unsigned r) {
    return 2 * PI * r;
}

int main (void) {
    unsigned r{};
    float area{}, c{};
    std::cout << "Enter the value of the radius of the circle : " && std::cin >> r;
    if (r > INT8_MAX) exit(EXIT_FAILURE);
    area = eval_area(r);
    c = eval_c(r);
    std::cout << "Area : " << area << std::endl;
    std::cout << "Circumference : " << c << std::endl;
    return 0;
}
