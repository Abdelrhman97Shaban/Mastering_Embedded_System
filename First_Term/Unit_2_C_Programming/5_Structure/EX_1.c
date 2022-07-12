#include <stdio.h>

typedef struct 
{
    char name [15];
    int roll; 
    float mark; 
}Sstudent_t;

Sstudent_t student; 

int main (void)
{
    printf("Enter information of students: \n");
    printf("Enter Name: ");
    gets(student.name); 
    printf("Enter roll number: ");
    scanf("%d",&student.roll); 
    printf("Enter marks: ");
    scanf("%f",&student.mark);

    printf("\nDisplaying Information: \n");
    printf("Name: %s\n",student.name);
    printf("Roll: %d\n",student.roll);
    printf("Name: %0.2f\n",student.mark); 
     
}