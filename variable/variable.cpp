#include <stdio.h>


int main()
{
	int a=10;
	//��ȡintռ�õ��ֽ�
    printf("%d \n",sizeof(int));
	printf("%d \n",sizeof(a));

	//�����ĵ�ַ�����Ǳ������ڴ��е�λ��
	//��&�ű�ʾ

	int b=0x12345678;
	printf("Adress:%08X \n",&b);  //breakpoint 


	int c=0x12345678;
	c=0x05050505;


	//�з������޷���

	//�޷��ţ�1100 0110 - > 198(10����)
	unsigned char d=198;

	//�з��ţ����λ�Ƿ���λ�����ò����ʾ  1��ʾ����   0��ʾ����
	//1100 0110 - > -58(10����)  
    char f=-58;
	return 0;
}