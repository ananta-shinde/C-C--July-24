
#include<stdio.h>
int main(int argc, char const *argv[])
{
    // if(condition/expression){ body of if}
    int num;
    printf("enter a number");
    scanf("%d",&num);

    if(num >=20 && num<=50){
        printf("valid input");
    }
    else{
        printf("invalid input");
    }
    return 0;
}
