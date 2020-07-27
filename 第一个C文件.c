#include <stdio.h>
#include <stdlib.h>
int main()//程序的入口，操作系统启动一个程序，先找到exe的main出现的位置
{
	
	system("ipconfig");
    system("color 3");
    printf("Hello World !\n");
    
    int num1;
    int num2;
    int num3;
    int num4;
    char *p;
    p = &num4;
    num4 = 0x11222345;
    printf("请输入数据：");
    scanf("%d %d",&num1,&num2);//双引号中除了占位符，尽量不要写任何符号
	num3 = num1+num2;
    printf("%d+%d=%d\n",num1,num2,num3);
	printf("%x\n",p[1]);
    
	system("pause");//system为widows命令，pause指令作用等待用户输入，造成程序在输入之前不会结束
	return 0;
}
