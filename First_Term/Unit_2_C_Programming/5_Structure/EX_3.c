#include <stdio.h> 

typedef struct 
{
    float img; 
    float real; 
}Scomplex_t;

Scomplex_t C_num1, C_num2, sum;  

int main (void)
{
    printf("For 1st num Enter real and img respectively: "); 
    scanf("%f",&C_num1.real); 
    scanf("%f",&C_num1.img);
    printf("For 2nd num Enter real and img respectively: "); 
    scanf("%f",&C_num2.real); 
    scanf("%f",&C_num2.img);
    
    sum.real = C_num1.real + C_num2.real; 
    sum.img = C_num1.img + C_num2.img;

    printf("Sum = %.1f + %0.1fi",sum.real,sum.img);  
    return 0; 
    
}