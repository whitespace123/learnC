#include<stdio.h>
int main() {
	//const修饰该变量为常量，常量只能被显示初始化，不能赋值,只读。
	const int AMOUNT = 100;
	int price = 0;
	printf("请输入金额（元）100元内：");
	scanf("%d",&price);
	int change = AMOUNT - price;
	printf("找您：%d元",change);
	return 0;
}
