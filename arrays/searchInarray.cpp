#include<stdio.h>
int main(int argc, char const *argv[])
{
    int numbers[5] = {20,15,20,12,11};
    int num, count=0;
    printf("Enter number to be searched for :");
    scanf("%d",&num);

   for(int i=0;i<5;i++)
   {
        if(numbers[i] == num)
        count++;
   }
    
   if(count == 0)
   {
     printf("\nnumber not found");
   }else{
        printf("\nnumber found %d times",count);
   }

    return 0;
}
