#include <iostream>
#include <algorithm>

int GCD (int n1, int n2) {
    static int min = std::min(n1, n2);
    if (min == 1) return min;
    if (n1 % min == 0 && n2 % min == 0) return min;
    min--;
    return GCD(n1 , n2);
}

int main(){
    int n1 = 0, n2 = 0;
    std::cout << "Enter two positive integers : " && std::cin >> n1 >> n2;
    if ( n1 < 1 || n2 < 1) {
        std::cout << "invalid input" << std::endl;
        exit(EXIT_FAILURE);
    }
    std::cout << "The GCD of " << n1 << " and " << n2 << " is : " << GCD(n1, n2) << std::endl;
    return 0;
}
