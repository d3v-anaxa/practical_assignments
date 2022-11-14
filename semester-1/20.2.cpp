#include <iostream>
#include <algorithm>

int main(){
    int n1 = 0, n2 = 0;
    std::cout << "Enter two positive integers : " && std::cin >> n1 >> n2;
    if ( n1 < 1 || n2 < 1) {
        std::cout << "invalid input" << std::endl;
        exit(EXIT_FAILURE);
    }
    
    int min = std::min(n1, n2);
    while (min != 1) {
        if (n1 % min == 0 && n2 % min == 0) break;
        --min;
    }
    std::cout << "The GCD of " << n1 << " and " << n2 << " is : " << min << std::endl;
    return 0;
}
