#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int a;
	int b;
	
	printf("input a up");
	scanf("%d", &a);
	
	printf("input a down");
	scanf("%d", &b);
	
	printf("the result of is %f. \n",	(float) a/b);
	
	system("PAUSE");
	return 0;
}
