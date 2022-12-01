#include <stdio.h>
int main(void)
{
	int height;
	scanf("%d", &height);
    
	for(int i = 0; i < height; i++)
	{
		for(int j = 0; j < height-1-i; j++)
		{
			printf(" ");	
		} 
		
		for(int j = 0; j < (i * 2) + 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}