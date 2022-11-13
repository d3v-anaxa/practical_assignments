#include <stdio.h>
#include <stdlib.h>
int main() 
{
    int n1 = 0, n2 = 1, temp, inp;
    printf("Enter the number of fib. nums u want: ");
    scanf("%d", &inp);
    if(inp < 1)
    {
        printf("InVaLiD!!\n");
        return main();
    }

    switch(inp)
    {
        case 1:
            printf("%d", n1);

        default:
            for(int i = 0; i < inp; i++)
            {
                temp = n1;
                n1+=n2;
                n2 = temp;
                if ( temp < 0) {
                    printf("Limit Exceeded\n");
                    exit(1);
                }
                printf("%d ", temp);
            }
            printf("\n");
    }
    return 0;
}
