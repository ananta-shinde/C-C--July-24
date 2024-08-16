#include<stdio.h>
int main(int argc, char const *argv[])
{
    int numbers[5] = {20,15,200,12,11};
    int largest = numbers[0];
    for(int i=0;i<5;i++)
    {
        if(numbers[i]>= largest)
        {
            largest = numbers[i];
        }
    }

    printf("\nLargest number is : %d",largest);
}