#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i=1;
    while (i<=100)
    {
        if(i%7==0 || i%6==0 || i%15==0)
        {
            printf("%d\t",i);
        }
        
        i = i+1;
    }
    
    return 0;
}
