#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int answer=40,i,j=0;
	do
	{
	printf("guess number : ");
	scanf("%d",&i);
	if(i<answer)
	{printf("low\n");
	}
	
	else if(i>answer)
	{
		printf("high\n");
	}
	j++;}
	while( i!= answer);
	
	printf("congratulation. trial : %d\n",j);
	
	
	
			
	return 0;
}
