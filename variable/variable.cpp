#include <stdio.h>


int main()
{
	int a=10;
	//获取int占用的字节
    printf("%d \n",sizeof(int));
	printf("%d \n",sizeof(a));

	//变量的地址：就是变量在内存中的位置
	//用&号表示

	int b=0x12345678;
	printf("Adress:%08X \n",&b);  //breakpoint 


	int c=0x12345678;
	c=0x05050505;


	//有符号与无符号

	//无符号：1100 0110 - > 198(10进制)
	unsigned char d=198;

	//有符号：最高位是符号位，采用补码表示  1表示负数   0表示正数
	//1100 0110 - > -58(10进制)  
    char f=-58;
	return 0;
}