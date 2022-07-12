#include <stdio.h>

typedef struct 
{
    char name [50];
    int roll; 
    float mark; 
}Sstudent_t;


int main (void)
{   
    Sstudent_t students[10]; 
    int i; 
    printf("Enter information of students: \n");
    for (i = 0; i < 10; i++)
    {
        students[i].roll = i + 1; 
        printf("for roll number %d\n", students[i].roll);
        printf("Enter Name: "); 
        scanf("%s",&students[i].name); 
        printf("Enter marks: ");
        scanf("%f",&students[i].mark);
    }

    printf("\nDisplaying Information: \n");
    for (i = 0; i < 10; i++)
    {
        printf("Information for number %d:\n",students[i].roll);
        printf("Name: %s\n",students[i].name);
        printf("Name: %0.2f\n",students[i].mark);
    }
    return 0; 
}