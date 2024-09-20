#include <stdio.h>

void main() {
	int n,i=1,j=1;
	
	printf("Enter N:-");
	scanf("%d",&n);
	
    for(i = 1; i <= 10; i++) 
	{
        printf("%d\n", i);
    }
    printf("\n");
    
    for(j = 1; j <= n; j++) {
        printf("%d\n", j);
    }
}

