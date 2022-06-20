#include <Stdio.h> 

int main (void) 
{
	int row, col; 
	printf("Enter Rows and columns of matrix: ");
	scanf("%d%d",&row,&col);
	int R = row + 2; 
	int C = col + 2; 	
	int matrix[R][C];
	int trans[R][C]; 
	int r,c; 
	for(r = 0; r < row; r++)
	{
		for(c = 0; c < col; c++)
		{
			printf("Enter elements a%d%d: ",r+1,c+1);
			scanf("%d",&matrix[r][c]);
		}
	}
	
	printf("\nThe Matrix:\n"); 
	for(r = 0; r < row; r++)
	{
		for(c = 0; c < col; c++)
		{
			printf("%d ",matrix[r][c]);
		}
		printf("\n"); 
	}



	for(r = 0; r < row; r++)
	{
		for(c = 0; c < col; c++)
		{
			trans[c][r] = matrix[r][c];  
		}
	}
	printf("\nThe transpose of matrix\n");
	for(r = 0; r < col; r++)
	{
		for(c = 0; c < row; c++)
		{
			printf("%d ",trans[r][c]);  
		}	
		printf("\n\n");
	}
	
	return 0; 
}
