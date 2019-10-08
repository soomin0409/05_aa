#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i=0;
	char c;
	printf("input a string: ");
	while((c=getchar())!='\n')
	{
		i++;
		}
	printf("the number of digits is %d",i);
			
	return 0;
}
