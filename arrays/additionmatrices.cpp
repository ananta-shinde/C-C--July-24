#include<stdio.h>
int main(int argc, char const *argv[])
{
    int M1[2][2];
    int M2[2][2];
    int result[2][2];

    printf("Enter values for matrix 1 : \n");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++){
            printf("enter number :");
            scanf("%d",&M1[i][j]);
        }  
    }

    printf("Enter values for matrix 2 : \n");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++){
            printf("enter number :");
            scanf("%d",&M2[i][j]);
        }  
    }


    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++){
            result[i][j] = M1[i][j]+M2[i][j];
        }  
    }

     for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++){
            printf("%d\t",result[i][j] );
        }  
        printf("\n");
    }

    return 0;
}
