#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
	
	char a[128] = "hello";
    printf("a = %s\n",a);
    printf("sizeof 方法获取字符串长度：%d\n",sizeof(a)/sizeof(a[0]));
    printf("strlen 方法获取字符串有效长度：%d\n",strlen(a));
    
	system("pause");
	return 0;
}
