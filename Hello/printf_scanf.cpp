#include <stdio.h>

int main()
{
	printf("���\n");
    //��%d��ʾһ��������ռλ��
	printf("a: %d \n",33);
	printf("a: %d,b: %d \n",32,33);

    //%3d��ʾռλ3�����ţ���Ҫ����������
	printf("a: %3d \n",33);
	printf("a: %3d \n",333);

	//%03d��ʾռλ3�����ţ����ǰ�治���Ļ�����0����
	printf("a: %03d \n",33);
	printf("a: %03d \n",333);


	//%f ��ʾfloat����
	printf("a: %f \n",12.34);
	printf("a: %d,b: %f \n",11,11.34);

	//%.2fָ����ʾС�����2λ����������
	printf("a: %.2f \n",12.346666);




   //scanf ��ʾ�û�����ķ���  ע�⣺scan�����%�����治Ҫ��ӿո����\n

	//int������ʱ������scanf
	int a;
	printf("please input:");

	scanf("%d", &a);

	printf("result: %d \n",a);


	//С����ʱ������scanf
    double b;
	printf("please input:");

	scanf("%lf",&b);  //long-float
	printf("result: %lf \n",b);
	


	//һ�������scanf��������2����
	int a;
	int b;
	double c;

	scanf("%d,%d,%lf",&a,&b,&c);

		return 0;
}