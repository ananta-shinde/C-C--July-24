#include<stdio.h>
struct Student
{
    int rollNo;
    float marks;
    char name[40];
};

int main(int argc, char const *argv[])
{
    Student s1,s2;
    s1.rollNo = 200;
    s2.rollNo = 400;
    s2.marks = 20.5;

    printf("%f",s2.marks);


    return 0;
}
