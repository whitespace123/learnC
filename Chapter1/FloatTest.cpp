#include<stdio.h>
int main(){
	double height;
	int inch;
	int foot;
	printf("请输入您的身高，几尺几寸？：");
	scanf("%d %d",&foot,&inch);
	//使用整数除法运算，会丢失精度 ，当和整数和浮点数进行运算时，会数据类型提升
	height = (foot + inch/12.0)*0.3048;
	printf("您的身高为：%fcm：",height);
	return 0;
}
