#include<stdio.h>
int main(void)
{
    int height=0;
	int i,j, n,p=1;
    
    
    while ( height < 1 || height > 9 ) 
    {
    	
	printf("\nenter the height of mario:");
    scanf("%d", &height);
    
	}
	
	n=height;			//hwight value is assignedd to n
	
	
    for(i=1;i<n;i++)
   {
   	for(j=1;j<n-i;j++)
	   printf(" ");
   	for(j=0;j<i;j++)		//lloop for printing #
   		printf("#");
		printf(" ");          // f0r space between pyramid  
   		for(j=0;j<i;j++)		//loop for printing #
   		printf("#");
   		printf("\n");			//for next line
   	}
	
}   
