
#include<stdio.h>
double decimalToBinary(int num){
    double bno, mf = 1;
    while(num!=0){
        int r = num%2;
        num = num/2;
        bno = bno + (r*mf);
        mf = mf *10 ;
    }
    return bno;
}

int main(int argc, char const *argv[])
{
    int num;
    printf("enter a number");
    scanf("%d",&num);
    printf("Binary conversion is : %lf",decimalToBinary(12500));
    return 0;
}
