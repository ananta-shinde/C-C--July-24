#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num1,num2,num3,result;
    printf("enter number 1 :");
    scanf("%d",&num1);
     printf("enter number 2 :");
    scanf("%d",&num2);
     printf("enter number 3 :");
    scanf("%d",&num3);
    printf("before : %d\n",num1);
    result = num1-num2;
    printf("substraction of num1 & num2 : %d\n",result);
    result = num1+num3;
    printf("addition of num1 & num3 : %d\n",result);
    result = num1*num3;
    printf("Multiplication of num1 & num3 : %d\n",result);
    result = num1/num3;
    printf("division of num1 & num3 : %d\n",result);
    result = num1%num3;
    printf("remainder of num1 & num3 : %d\n",result);


    return 0;
}
