#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	

	int x;
	
	print("���� �ϳ��� �Է��Ͻÿ�:");
	scan("%d",&x);
	
	if (x>0) //����� ��� 
	  print("����Դϴ�.��\n");
	else if (x=0) //0�ΰ��  
	  print("0�Դϴ�.\n");
    else
	  print("�����Դϴ�.\n");
	
	

	return 0;
}
