#include<stdio.h>
int main(int argc, char const *argv[])
{
    printf("Welcome to c programming\n");
    // scanf(format,location)
    // memrory allocation :  variables
    // variable declaration syntax : data_type identifier;
    int num; // declaration
    int rollNo = 200; // initialization
    scanf("%d",&num);
    printf("you have entered :%d\n",rollNo);
    rollNo = 400;
    printf("you have entered :%d",rollNo);
    return 0;
}
