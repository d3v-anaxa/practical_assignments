#include <iostream>
#include <stdlib.h>
using namespace std;

int func(int n, int n1, int n2);

int main()
{
    int inp;
    int n1 = 0, n2 = 1;
    std::cout << "Enter the number of fib. nums u want: " && std::cin >> inp;

    if (inp < 1)
    {
        std::cout << "InVaLiD!!" << endl;
        return main();
    }

    func(inp, n1, n2);
    return 0;
}

int func(int n, int n1, int n2)
{
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
        return func((n - 1), n1, n2);
    }
}
