#include<stdio.h>
int main(int argc, char const *argv[])
{
    const int num = 20;
    int marks = 50;
    const int* ptr = &num;
    char symbol = '$';
    ptr = &marks;
    printf("%d\n",num);
    printf("%d\n",&num);
    printf("%d\n",ptr);
    printf("%d\n",ptr+1);
    printf("%d\n",&ptr);
    printf("%d\n",*ptr);

    return 0;
}
