// accept a number from user and print if it is odd or even
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num;
    printf("enter a number :");
    scanf("%d",&num);
   if(num%2 != 0){
        printf("number is odd\n");
   }
   if(num%2 == 0) {
        printf("number is even\n");
    }
    
    return 0;
}
