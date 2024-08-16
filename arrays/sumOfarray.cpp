#include<stdio.h>
int main(int argc, char const *argv[])
{
    int size;
    printf("Enter no values :");
    scanf("%d",&size);
    int numbers[size];
   
   for(int i=0;i<size;i++)
   {
      printf("Enter a number : ");
      scanf("%d",&numbers[i]);
   }
    

   int sum = 0;
   for(int i=0;i<size;i++)
   {
       sum =sum+numbers[i];
   }

    printf("Addition of numbers is %d",sum);
    return 0;
}
