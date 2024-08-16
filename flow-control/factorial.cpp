#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num;
    printf("enter a number : ");
    scanf("%d",&num);
    int result = 1;
    while (num>0)
    {
        result = result*num;
        num--;
    }

    printf("Factorial is : %d",result);
    
    return 0;
}
