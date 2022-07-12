#include <stdio.h>

#define PI 3.14 
#define area(r)  (PI * (r) * (r))
int main (void)
{
    int reduis; 
    float area; 
    printf("Enter Reduis: "); 
    scanf("%d",&reduis); 
    area = area(reduis); 
    printf("Area = %.2f\n",area); 
    return 0; 
}