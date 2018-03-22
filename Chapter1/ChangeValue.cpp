#include<stdio.h>
int main(){
	int x = 10;
	int y =20;
	int temp;
	printf("有x和y，分别是%d %d\n",x,y);
	printf("现在交换它们的值...\n");
	//使用临时变量来作为介质保存值 
	temp = x;
	x =y;
	y=temp;
	printf("现在x和y的值为：%d %d\n",x,y);
	return 0;
}
