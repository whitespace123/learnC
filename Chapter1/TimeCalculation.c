#include<stdio.h>
int main(){
	int hour1,minute1;
	int hour2,minute2;
	printf("���������ĵ�һ��ʱ�䣺");
	scanf("%d %d",&hour1,&minute1);
	printf("���������ĵڶ���ʱ�䣺");
	scanf("%d %d",&hour2,&minute2);
	int minuteResult=(hour1*60+minute1)-(hour2*60+minute2);
	int hour=minuteResult/60;
	//���������ǽ��*����+���� 
	int minute=minuteResult%60;
	printf("ʱ���Ϊ��%dСʱ %d����",hour,minute);
	return 0;
}
