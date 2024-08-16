#include<stdio.h>
int main(int argc, char const *argv[])
{
    float week_temps[14] = {20,25,45,56,45,45,12};
    float sum = 0;
    for(int i=0;i<7;i++)
    {
        sum = sum+week_temps[i];
    }
    // printf("%f",sum);
    printf("average of week :%f\n",sum/7);
    return 0;
}
