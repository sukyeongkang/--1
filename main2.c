#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int x;
	
	printf("정수하나를 입력하시오:");
	scanf("%d",&x);
	
	if (x<0) //음수인 경우 
	  x = -1*x;
	  
	printf("절댓값은 %i 입니다.\n",x);
	return 0;
}
