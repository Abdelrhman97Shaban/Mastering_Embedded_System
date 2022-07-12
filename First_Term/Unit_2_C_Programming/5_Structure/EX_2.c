#include <stdio.h>

typedef struct 
{
    int feet; 
    float inch; 
}Sdistance_t; 

Sdistance_t d1,d2,sum; 
int main (void)
{
    printf("Enter info for 1st distance: \n"); 
    printf("Enter Feet: "); 
    scanf("%d",&d1.feet); 
    printf("Enter Inch: "); 
    scanf("%f",&d1.inch); 

    printf("Enter info for 2nd distance: \n"); 
    printf("Enter Feet: "); 
    scanf("%d",&d2.feet); 
    printf("Enter Inch: "); 
    scanf("%f",&d2.inch);

    sum.feet = d1.feet + d2.feet; 
    sum.inch = d1.inch + d2.inch; 

    if (sum.inch > 12)
    {
        sum.inch = sum.inch - 12;
        (sum.feet)++;  
    }

    printf("Sum of distances: %d\'-%.1f\"",sum.feet,sum.inch); 
    return 0; 
    
}