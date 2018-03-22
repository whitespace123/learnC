#include<stdio.h>
int main(){
	int hour1,minute1;
	int hour2,minute2;
	printf("请输入您的第一个时间：");
	scanf("%d %d",&hour1,&minute1);
	printf("请输入您的第二个时间：");
	scanf("%d %d",&hour2,&minute2);
	int minuteResult=(hour1*60+minute1)-(hour2*60+minute2);
	int hour=minuteResult/60;
	//被除数就是结果*除数+余数 
	int minute=minuteResult%60;
	printf("时间差为：%d小时 %d分钟",hour,minute);
	return 0;
}
