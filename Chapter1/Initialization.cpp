#include<stdio.h>
int main() {
	//x没有显示初始化 ，值为其所在地址的包含的值
	int x;
	int y =0;
	printf("没有显示初始化的话，x的值为它所在内存的地址值：%d",x+y);
	return 0;
}
