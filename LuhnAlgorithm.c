#include <stdio.h>
#include <string.h>

//---------------------------Still Working---------------------------

int len(unsigned long int num);

int main(void)
{
    unsigned long int number = 0;
    // int sum1 = 0;
    int counter = 0;
    unsigned long int  num = 0;
    int rem = 10;
    unsigned long int dev = 1.0;

    printf("Enter Number : ");
    scanf("%lu ", &number);
    printf("%lu ",number);

    int length = len(number);
    printf("length %i\n", length);

    for (int i = 1; i <= length; i++, counter++)
    {
        num =(long int) (number / dev) % rem;

        dev = dev * 10;
        printf("%i\n", num);

        // if(counter%2==1)
        // {
        //     sum1 += num;
        // }

    }

  //  printf("%i\n", sum1);
}

int len(unsigned long int num)
{

    int numberOfDigits = 0;
    do
    {
        numberOfDigits++;
        num = num / 10;
    } while (num);

    return numberOfDigits;
}
