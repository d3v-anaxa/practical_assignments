#include <iostream>
#include <algorithm>

unsigned GCD (unsigned n1, unsigned n2) {
    if (n1 == 0) return n2; // using euclidean algorithm
    return GCD(n2 % n1 , n1);
}

int main(){
    unsigned n1 = 0, n2 = 0;
    std::cout << "Enter two positive integers : " && std::cin >> n1 >> n2;
    if ( n1 < 1 || n2 < 1) {
        std::cout << "invalid input" << std::endl;
        exit(EXIT_FAILURE);
    }
    std::cout << "The GCD of " << n1 << " and " << n2 << " is : " << GCD(n1, n2) << std::endl;
    return 0;
}
