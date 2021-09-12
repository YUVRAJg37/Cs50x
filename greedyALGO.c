#include <stdio.h>
#include <tgmath.h>

int main(void)
{
    float dollars = 0.0f;
    int count = 0;
    int cents = 0;
    int arr[4] = {25,10,5,1};

    do
    {
        printf("Change Owed : ");
        scanf("%f", &dollars);
    }while (dollars <= 0);

    cents = round(dollars * 100);

    while(cents!=0)
    {
        for (int i = 0; i < 4;i++)
        {
            while(arr[i] <= cents)
            {
            cents -= arr[i];
            count++;
            } 
        }
    }

    printf("%i", count);
}