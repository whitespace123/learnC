#include<stdio.h>
int main(){
	double height;
	int inch;
	int foot;
	printf("������������ߣ����߼��磿��");
	scanf("%d %d",&foot,&inch);
	//ʹ�������������㣬�ᶪʧ���� �����������͸�������������ʱ����������������
	height = (foot + inch/12.0)*0.3048;
	printf("�������Ϊ��%fcm��",height);
	return 0;
}
