#include <cstdlib>
#include <iostream>
using namespace std;

int main(){
    int n = 0;
    int factorial = 1;
    std::cout << "Enter a positive Integer : " && std::cin >> n;
    if (n < 1) {
        std::cout << "Invalid Input Value" << std::endl;
        exit(EXIT_FAILURE);
    } 
    while (n != 1) {
        factorial *= n;
        --n;
    }
     if(factorial < 1) {
        std::cout << "LIMIT EXCEEDED" << std::endl;
        exit(EXIT_SUCCESS);
     }
     std::cout << "Factorial : " << factorial << std::endl;
     return 0;
}
