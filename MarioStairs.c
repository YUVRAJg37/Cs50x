#include <stdio.h>

int main(void)
{
    int height = 0;

    while(height<=0 || height>8)
    {
        printf("Enter Height : ");
        scanf("%i", &height);
    }

    for (int i = 0; i < height; i++)
    {
        for (int space = 1; space < height-i; space++)
        {
            printf(" ");
        }
        for (int j = 0; j <= i; j++)
        {
            printf("#");
        }

        printf(" ");

        for (int k = 0; k <= i;k++)
        {
             printf("#");
        }

            printf("\n");
    }
}