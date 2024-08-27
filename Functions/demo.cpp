#include<stdio.h>
#include"myfun.h"
int main()
{
    int numbers[5] = {20,45,121,56,88};
    int marks[4] = {20,55,20,45};

    // int largest = numbers[0];
    // for(int i=0;i<5;i++)
    // {
    //     if(largest <= numbers[i]){
    //         largest = numbers[i];
    //     }
    // }

    printf("%d",largestOfArray(marks,4));



    
    
    
    return 0;
}

