#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int answer=59;
	int x;
	int trial = 0; 
	
	do
	{
	printf("input a number:");	//�Է��ض� ���� ���
	scanf("%i",&x);	//�Է��� ����
	trial++;
	   if (x>answer)
	     printf("high\n");
         

	   if (x<answer)
	     printf("low\n");
	     
	    
	     
	}
	
	
	while (x!=answer);
		printf("number of trial = %i\n", trial); // �õ� Ƚ�� ���  

	
   
	return 0;
}
