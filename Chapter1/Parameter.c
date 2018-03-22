#include<stdio.h>
int main() {
	int price=0;
	printf("请输入金额（元）100以内：");
	//如果要给输入的值赋给变量，需要给变量前加& 
	scanf("%d",&price);
	int change = 100 -price;
	printf("找您：%d元",change);
	return 0;
}
