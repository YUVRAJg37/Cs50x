#include "stdio.h"
#include "cstdlib"
#include "ctime"

void numberGenerator(int ar[]);
bool checker(int num[]);
void print(int num[], int size);
void sum(int num1[], int num2[]);

int main(void)
{
    int cc[16];

    fflush(stdin);

    while (!checker(cc))
    {
        for (int i = 0; i < 16; i++)
        {
            srand((unsigned)time(NULL));
            cc[i] = (rand() % 10);
        }
    }

    print(cc, 16);
}

void numberGenerator(int arr)
{
}

bool checker(int num[])
{
    int temp1[8];
    int temp2[8];
    int finalSum = 0;

    for (int i = 0; i < 8; i++)
    {
        temp1[i] = num[i * 2] * 2;
    }

    // print(num, 16);
    // print(temp1, 8);

    sum(temp1, temp2);

    // print(temp1, 8);

    for (int i = 0; i < 8; i++)
    {
        temp2[i] = num[(i * 2) + 1];
    }
    // print(temp2, 8);

    for (int i = 0; i < 8; i++)
    {
        finalSum += temp1[i] + temp2[i];
    }

    // printf("Final sum : %i", finalSum);

    if (finalSum % 10 == 0)
        return true;
    else
        return false;
}

void print(int num[], int size)
{
    int space = 1;

    for (int i = 0; i < size; i++, space++)
    {
        printf("%i", num[i]);

        if (space % 4 == 0)
            printf(" ");
    }
}

void sum(int temp1[], int temp2[])
{
    for (int i = 0; i < 8; i++)
    {
        if (temp1[i] > 9)
        {
            int counter = 0;
            int num = 1;
            int div = 10;
            int number = 0;
            int hold = 0;

            temp2[i] = temp1[i];

            do
            {
                counter++;
                temp2[i] = temp2[i] / 10;
            } while (temp2[i]);

            for (int j = 0; j < counter; j++)
            {
                number = (temp1[i] / num) % div;
                num *= 10;
                hold += number;
            }

            temp1[i] = hold;
        }
    }
}