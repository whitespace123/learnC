#include<stdio.h>
int main(){
	int x = 10;
	int y =20;
	int temp;
	printf("��x��y���ֱ���%d %d\n",x,y);
	printf("���ڽ������ǵ�ֵ...\n");
	//ʹ����ʱ��������Ϊ���ʱ���ֵ 
	temp = x;
	x =y;
	y=temp;
	printf("����x��y��ֵΪ��%d %d\n",x,y);
	return 0;
}
