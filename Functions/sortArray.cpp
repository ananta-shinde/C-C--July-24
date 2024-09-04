#include<stdio.h>
#include"myfun.h"

int main(int argc, char const *argv[])
{
    int numbers[] = {20,45,56,25,45,12};
    sortArray(numbers,6,'d');
    printArray(numbers,6);
    
    return 0;
}
