#include <stdio.h>
#include<stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void)
{
	int a,b,c,d,e,f;
	printf("�п�J�Ĥ@�Ӯɶ�(��):\n");
	scanf("%d",&a);
	printf("�п�J�Ĥ@�Ӯɶ�(��):\n");
	scanf("%d",&b);	
	printf("�п�J�Ĥ@�Ӯɶ�(��):\n");
	scanf("%d",&c);
	printf("�п�J�ĤG�Ӯɶ�(��):\n");
	scanf("%d",&d);
	printf("�п�J�ĤG�Ӯɶ�(��):\n");
	scanf("%d",&e);	
	printf("�п�J�ĤG�Ӯɶ�(��):\n");
	scanf("%d",&f);
	
	if((a*3600+b*60+c)>(d*3600+e*60+f))
	  printf("�ۮt���ɶ���:%d��",(a*3600+b*60+c)-(d*3600+e*60+f));
	else
	  printf("�ۮt���ɶ���:%d��",(d*3600+e*60+f)-(a*3600+b*60+c));
 
	return 0;
}
