#include<stdio.h>
#include"myfun.h"
int addition(int n1,int n2)
{
    return n1+n2;
}
int addition(int n1,int n2,float n3)
{
   
    return n1+n2+n3;
    
}

int main(int argc, char const *argv[])
{
    int n1,n2;
    // printf("enter a number");
    // scanf("%d",&n1);
    // printf("enter a number");
    // scanf("%d",&n2);

    printf("addition is : %d\n",largestOfThree(20,30,30));
    // printf("addition is : %d\n",addition(n1,n2));
    // printf("addition is : %d",addition(40,30));
    

    return 0;
}
