#include <stdio.h>
int main()
{
    for (int i = 2*10; i >= 1; i = i - 2)
    {
        printf("%d  ",i);
    }
    printf("\n");
    return 0;
}