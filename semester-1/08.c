#include <stdio.h>

#define swap(x , y)    int t = x;  \
                        x = y;  \
                        y = t;  

int main (void) {
    int n1 = 0, n2 = 0;
    printf("Enter first integer : ");
    scanf("%i", &n1);
    printf("Enter second integer : ");
    scanf("%i", &n2);
    printf("[BEFORE SWAP]");
    printf("\nn1 : %i, n2 : %i\n", n1, n2);
    swap(n1, n2);
    printf("\n[AFTER SWAP]");
    printf("\nn1 : %i, n2 : %i\n", n1, n2);
    return 0;
}
