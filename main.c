#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int input;
	printf("intput a number : ");
	scanf("%d",&input);
	if(input>0)
	{
	 printf("양수입니다");
	}
	if(input<0||input==0);
	{
		printf("양수아닙니다");
	}
	return 0;
}
