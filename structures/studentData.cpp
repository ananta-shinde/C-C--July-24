#include<stdio.h>

struct Student{
    int rollNo;
    float marks;
    char grade;
};
int main(int argc, char const *argv[])
{
    Student stud_list[5];
    
    for(int i=0;i<5;i++)
    {
        printf("enter roll no :");
        scanf("%d",&stud_list[i].rollNo);
        printf("enter marks :");
        scanf("%f",&stud_list[i].marks);
        if(stud_list[i].marks > 80)
        {
            stud_list[i].grade = 'A+';
        }else if(stud_list[i].marks > 60 && stud_list[i].marks <=80)
        {
            stud_list[i].grade = 'A';
        }
        else{
            stud_list[i].grade = 'F';
        }
    }

    for(int i=0;i<5;i++)
    {
         printf("rollNo : %d, marks : %f, Grade :%c\n",stud_list[i].rollNo,stud_list[i].marks,stud_list[i].grade);
    }
    return 0;
}
