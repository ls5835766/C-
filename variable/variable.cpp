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


	//��������,����ʼ��
	char arr[5];
	//��������,��ʼ��,���ڴ���ռ��5���ֽ�
	char arry[5]={90,98,96,50,80};
	//�������飬���Գ�ʼ��һ����
	char array[5]={90,91 };

	printf("��һ��ѧ���ĳɼ���:%d�� \n",array[1]);

	char s=arry[0];
	arry[0]=arry[1];
	arry[1]=s;



	return 0;
}