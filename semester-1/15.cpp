#include <cstdint>
#include <cstdlib>
#include <iostream>

using namespace std;

int main (void) {
    unsigned i = 0;
    int res = 0;
    std::cout << "Enter the number of integers to enter [positive integers only] : " && std::cin >> i;
    if ( i > INT8_MAX || i == 0) std::cout << "Invalid Input" << std::endl;exit(EXIT_FAILURE);
    while(i != 0) {
        int u = 0;
        std::cin >> u;
        res += u;
        --i;
    }
    std::cout << "SUM : " << res << std::endl;
    return 0;
}
