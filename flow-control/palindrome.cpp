#include<stdio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
    long int num;
    printf("enter a number :");
    scanf("%d",&num);

    int temp = num;
    int count = 0;
    while(num >0){
        num = num/10;
        count = count+1;
    }
    printf("The entered number is of %d digits\n",count);

    int newNumber = 0;
    int p = count-1;
    num = temp;
    while (num>0)
    {
        int r = num%10;
        newNumber = newNumber + (r*pow(10,p));
        num = num/10;
        p = p-1;
    }

    printf("New number is : %d\n",newNumber);

    if(temp == newNumber){
        printf("number is palindrome ");
    }else{
        printf("number is  not palindrome ");
    }

    num = temp;
    int sum = 0;
    while(num>0)
    {
        int r = num%10;
        sum = sum + pow(r,count);
        num = num/10;
    }

    if(temp == sum)
    {
        printf("\n number is amstrong number");
    }else{
         printf("\n number is not amstrong number");
    }
    
    return 0;
}
