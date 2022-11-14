#include <cstdlib>
#include <iostream>
#include <stdlib.h>
int main() 
{
    int n1 = 0, n2 = 1, temp, inp;
    std::cout << "Enter the number of fib. nums u want: " && std::cin >> inp;
    if(inp < 1)
    {
        printf("InVaLiD!!\n");
        exit(EXIT_FAILURE);
    }

    switch(inp)
    {
        case 1:
            std::cout << n1 << std::endl;
            break;

        default:
            for(int i = 0; i < inp; i++)
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
            break;
    }
    return 0;
}
