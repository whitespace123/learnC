#include<stdio.h>
int main() {
	//const���θñ���Ϊ����������ֻ�ܱ���ʾ��ʼ�������ܸ�ֵ,ֻ����
	const int AMOUNT = 100;
	int price = 0;
	printf("�������Ԫ��100Ԫ�ڣ�");
	scanf("%d",&price);
	int change = AMOUNT - price;
	printf("������%dԪ",change);
	return 0;
}
