#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
	
	char c;
    char *str = "zhuguohe";
    char *p;
    
    c = 'h';
    p = strchr(str,c);                 //�����ַ�
    if(p == NULL){
		printf("û���ҵ�\n");
    }
    puts(p);
    
    char *str1 = "gu";
    p = strstr(str,str1);             //�����ַ���
    if(p == NULL){
		printf("û���ҵ�\n");
    }
    puts(p);
    
    char str2[] = "Hello World";
    puts(strlwr(str2));              //תСд
    puts(strupr(str2));              // ת��д
    
    
    
	system("pause");
	return 0;
}
