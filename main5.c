#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int x,y;
	char op;
	int result;
	 
	printf("enter the calculation:");
	scanf("%d %c %d",&x,&op,&y);
	
	if (op=='+')
      result = x+y;	   
	   
	else if (op=='-')
      result = x-y;	   

	else if (op=='*')
      result = x*y;	   

	else if (op=='/')
       result = x/y;	   
       
	else 
	   printf("i cant do");
	   
	   
	printf("= %i\n",result);
	return 0;
}
