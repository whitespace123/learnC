#include<stdio.h>
int main() {
	int a;
	int b;
	printf("请输入两个整数：");
	//如果在这里输入的是字符串的话，说明接收的变量没有进行初始化 ，所以会获得未初始化变量的内存的值相加的和 
	scanf("%d %d",&a,&b);
	printf("值的和为：%d",a+b);
	return 0;
}
