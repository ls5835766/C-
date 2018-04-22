#include <stdio.h>

int main()
{
	printf("你好\n");
    //用%d表示一个整数的占位符
	printf("a: %d \n",33);
	printf("a: %d,b: %d \n",32,33);

    //%3d表示占位3个符号，主要是用来对齐
	printf("a: %3d \n",33);
	printf("a: %3d \n",333);

	//%03d表示占位3个符号，如果前面不够的话，用0补充
	printf("a: %03d \n",33);
	printf("a: %03d \n",333);


	//%f 表示float类型
	printf("a: %f \n",12.34);
	printf("a: %d,b: %f \n",11,11.34);

	//%.2f指定显示小数点后2位，四舍五入
	printf("a: %.2f \n",12.346666);




   //scanf 表示用户输入的方法  注意：scan里面的%号里面不要添加空格或者\n

	//int整数的时候，输入scanf
	int a;
	printf("please input:");

	scanf("%d", &a);

	printf("result: %d \n",a);


	//小数的时候，输入scanf
    double b;
	printf("please input:");

	scanf("%lf",&b);  //long-float
	printf("result: %lf \n",b);
	


	//一行语句中scanf可以输入2个数
	int a;
	int b;
	double c;

	scanf("%d,%d,%lf",&a,&b,&c);

		return 0;
}