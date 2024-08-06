#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num;
    printf("Enter a phone number :");
    scanf("%d",&num);
    int count = 0;
    while(num>0){
        num = num/10;
        count = count+1; // count++
    }

    // printf("number is having %d digits",count);
    if(count == 10){
        printf("Phone number is valid");
    }else{
        printf("Phone number is invalid");
    }
    return 0;
}
