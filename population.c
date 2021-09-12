#include "stdio.h"

int main(void)
{
    int startSize = 0, endSize= 0;
    int year = 0;

    while(startSize<9)
    {
    printf("Start Size : \n"); //asking for startsize
    scanf("%i", &startSize);  //storing startsize
    }

    while(endSize<9)
    {
    printf("End Size : \n"); //asking for endsize
    scanf("%i", &endSize);  //storing endsize
    }

    for (; startSize < endSize; year++) //loop
    {
    startSize = startSize + (startSize / 3) - (startSize / 4); //basic logic
    }

    printf("Years: %i", year); // print year
}