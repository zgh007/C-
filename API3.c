#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
	
	char c;
    char *str = "zhuguohe";
    char *p;
    
    c = 'h';
    p = strchr(str,c);                 //查找字符
    if(p == NULL){
		printf("没有找到\n");
    }
    puts(p);
    
    char *str1 = "gu";
    p = strstr(str,str1);             //查找字符串
    if(p == NULL){
		printf("没有找到\n");
    }
    puts(p);
    
    char str2[] = "Hello World";
    puts(strlwr(str2));              //转小写
    puts(strupr(str2));              // 转大写
    
    
    
	system("pause");
	return 0;
}
