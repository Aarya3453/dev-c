#include <stdio.h>  
 
int main() 
 
{  
    int num, i, j, m = 1; 
    
    printf ("\n Enter the number to define the columns : ");  
    scanf ("%d", & num); 
    
    printf("      \n");
    
	for (i = 1; i <= num; i++)  
    {  
        for (j = 1; j <= i; j++)  
        {  
            printf( "* ");  
        }  
        printf("\n");  
    }  
    
    for (i = num-1; i >= 1; i--)  
    {  
        for (j = 1; j <= i; j++)  
        {  
            printf ("* ");  
        }  
        printf("\n");  
    }  
    
    return 0;  
}