#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int sum = 0;
	int x;
	int i;
	
	printf("input a number:");
	scanf("%d",&x);
	
	//for 문을 활용해서 1부터 x 까지 sum에 더하는 코드
	
	for(i = 0; i<=x; i++) 
	  sum=sum + i; 
	
	printf("the result is %d\n",sum);
	return 0;
}
