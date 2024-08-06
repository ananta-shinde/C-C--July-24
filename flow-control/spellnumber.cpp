#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num;
     printf("enter a number");
    scanf("%d",&num);

    // if(num>9 || num<0){
    //     printf("invalid input");
    // }else{
    //     if(num == 0)
    //     printf("ZERO");
    //     else if(num == 1)
    //     printf("ONE");
    //     else  
    //     printf("TWO");
    // }

   switch(num){
     case 0: printf("ZERO");
     break;
     case 1: printf("ONE");
     break;
     case 2: printf("TWO");
     break;
     default: printf("invalid input");
   }


    return 0;
}
