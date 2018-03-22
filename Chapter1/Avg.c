#include<stdio.h>
int main(){
	printf("请输入两个整数：");
	int num1;
	int num2;
	scanf("%d %d",&num1,&num2);
	double result = (num1+num2)/2.0;
	printf("其平均值为：%f",result);
	printf("%d",2);
	return 0;
}
