#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int s;


	printf("input the second:");
	scanf("%i",&s);

printf("the time for %i second is %i:%i:%i\n",s,s/3600,(s%3600)/60,(s%3600)%60);	
	
	
	return 0;
}
