#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i = 300;
    int count = 1;
    while(count<=2)
    {
        if(i%2==0)
        {
            printf("%d",i);
            count = count+1;
        }
       i = i+1;

    }
    return 0;
}
