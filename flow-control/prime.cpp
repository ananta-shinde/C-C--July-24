#include<stdio.h>
int main(int argc, char const *argv[])
{

for(int num=1;num<=100;num++)
{
    int n =2,flag = 0;
    while(n <= num/2)
    {
        if(num%n == 0)
        {
            flag = 1;
        }
        n++;
    }

    if(flag ==0)
    {
        printf("%d\t",num);
    }

}
    return 0;
}
