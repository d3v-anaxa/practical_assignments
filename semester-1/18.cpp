#include <iostream>
#include <cstdlib>
#include <stdlib.h>
using namespace std;


void recursive_fib (int n)
{
    static int n1 = 0, n2 = 1;
    int temp = n1;
    switch (n)
    {
    case 0:
        std::cout << endl;
        exit(EXIT_SUCCESS);

    default:
        n1 += n2;
        n2 = temp;
        if (temp < 0) {
            std::cout << "Limit exceded" << endl;
            exit(EXIT_SUCCESS);
        }
        std::cout << temp << " ";
        return recursive_fib(--n);
    }
}

void iterative_fib (int n) {
    static int n1 = 0, n2 = 1;
    int temp = n1;
            for(int i = 0; i < n; i++)
            {
                temp = n1;
                n1 += n2;
                n2 = temp;
                if ( temp < 0) {
                    std::cout << "Limit Exceeded" << std::endl;
                    exit(EXIT_SUCCESS);
                }
                std::cout << temp << " ";
            }
            std::cout << std::endl;
}

int select_option() {
    int x{};
    std::cout << "1 -> Print fibonacci number(s) using recursion" << std::endl;
    std::cout << "2 -> Print fibonacci number(s) using iteration" << std::endl;
    std::cout << "Enter your choice : " && std::cin >> x;
    return x;
}

int main()
{
    int n{};
    switch (select_option()) {
        case 1 : 
            std::cout << "Enter the number of fib. nums u want: " && std::cin >> n;
            if (n < 1){std::cout << "InVaLiD!!" << endl; exit(EXIT_FAILURE);}
            recursive_fib(n);
            break;
        case 2 : 
            std::cout << "Enter the number of fib. nums u want: " && std::cin >> n;
            if (n < 1){std::cout << "InVaLiD!!" << endl ; exit(EXIT_FAILURE);}
            iterative_fib(n);
            break;
        default :
            exit(EXIT_FAILURE);
    }
    return 0;
}
