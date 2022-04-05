#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number, guess, n= 1;
    srand(time(0));
    number = rand()%100+1;

    do
    {
        printf("enter the number between 1 to 100 to guess\n");
        scanf("%d", &guess);
        if (guess>number)
        {
            printf("lower number please!\n");
        }
        else if (guess<number)
        {
            printf("higher number please!\n");
        }
        else
        {
            printf("you guessed correctly\n you took %d attempts",n);
        }
        n++;
    } while (guess != number);

    return 0;
}