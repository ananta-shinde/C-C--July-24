
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num;
    char symbol;
    int numbers[5] = {40,20,45,56,55};

    num = 20;
   
    printf("%d\n",numbers);
    printf("%d\n",&numbers[4]);
    printf("%d\n",numbers[0]);
    printf("%d\n",numbers+1);
    return 0;
}
