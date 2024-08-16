#include<stdio.h>

int main(int argc, char const *argv[])
{
   
    int result = 0;
    int num;
    printf("enter a number :");
    scanf("%d",&num);
   
    for( int i = 1;i<=10;i++)
    {
        result = i*num;
         printf("%dX%d=%d\n",num,i,result);
    }
    return 0;
}
