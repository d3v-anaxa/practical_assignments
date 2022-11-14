#include <iostream>

#define swap(x , y)    int t = x;  \
                        x = y;  \
                        y = t;  

int main (void) {
    int n1 = 0, n2 = 0;
    std::cout << "Enter first integer : " && std::cin >> n1;
    std::cout << "Enter second integer : " && std::cin >> n2;
    std::cout << "[BEFORE SWAP]" << std::endl;
    std::cout << "n1 : " << n1 << "\tn2 : " << n2 <<std::endl;
    swap(n1, n2);
    std::cout << "[AFTER SWAP]" << std::endl;
    std::cout << "n1 : " << n1 << "\tn2 : " << n2 <<std::endl;
    return 0;
}
