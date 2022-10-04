#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int answer=59;
	int x;
	int trial = 0; 
	
	do
	{
	printf("input a number:");	//입력해라 문구 출력
	scanf("%i",&x);	//입력을 받음
	trial++;
	   if (x>answer)
	     printf("high\n");
         

	   if (x<answer)
	     printf("low\n");
	     
	    
	     
	}
	
	
	while (x!=answer);
		printf("number of trial = %i\n", trial); // 시도 횟수 출력  

	
   
	return 0;
}
