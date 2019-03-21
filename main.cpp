#include <stdio.h>
#include<stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void)
{
	int a,b,c,d,e,f;
	printf("請輸入第一個時間(時):\n");
	scanf("%d",&a);
	printf("請輸入第一個時間(分):\n");
	scanf("%d",&b);	
	printf("請輸入第一個時間(秒):\n");
	scanf("%d",&c);
	printf("請輸入第二個時間(時):\n");
	scanf("%d",&d);
	printf("請輸入第二個時間(分):\n");
	scanf("%d",&e);	
	printf("請輸入第二個時間(秒):\n");
	scanf("%d",&f);
	
	if((a*3600+b*60+c)>(d*3600+e*60+f))
	  printf("相差的時間為:%d秒",(a*3600+b*60+c)-(d*3600+e*60+f));
	else
	  printf("相差的時間為:%d秒",(d*3600+e*60+f)-(a*3600+b*60+c));
 
	return 0;
}
