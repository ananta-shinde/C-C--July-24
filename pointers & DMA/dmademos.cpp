#include<stdio.h>
#include<stdlib.h>
int main(int argc, char const *argv[])
{
    // float marks[5] = { 20,56,22,25,45};
    float *marks;
    // marks = (float*)malloc(20);
    marks = (float*)calloc(5,sizeof(float));
    marks[0] = 200;
    realloc(marks,sizeof(float)*10);
   
    for(int i=0;i<5;i++)
    {
        printf("%f\t",marks[i]);
    }
     free(marks);
    return 0;
}
