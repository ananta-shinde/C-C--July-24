
#include<stdio.h>
int main(int argc, char const *argv[])
{
     int n1,n2,n3;
     float per;
    printf("enter a number");
    scanf("%d",&n1);
    printf("enter a number");
    scanf("%d",&n2);
    printf("enter a number");
    scanf("%d",&n3);
    
    per  = ((n1+n2+n3)*100)/300;

    printf("per :%f\n",per);

    if(per>80){
        printf("You have passed with A+ grade");
    }
    else if(per<=80 && per>70){
        printf("You have passed with A grade");
    }
    else if(per<=70 && per>60){
        printf("You have passed with B grade");
    }
    else if(per<=60 && per>=40){
        printf("You have passed with C grade");
    }
    else{
        printf("You have Failed");
    }

    

    return 0;
}
