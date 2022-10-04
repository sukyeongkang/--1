#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	

	int x;
	
	print("정수 하나를 입력하시오:");
	scan("%d",&x);
	
	if (x>0) //양수인 경우 
	  print("양수입니다.우\n");
	else if (x=0) //0인경우  
	  print("0입니다.\n");
    else
	  print("음수입니다.\n");
	
	

	return 0;
}
