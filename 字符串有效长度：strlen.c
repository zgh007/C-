#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
	
	char a[128] = "hello";
    printf("a = %s\n",a);
    printf("sizeof ������ȡ�ַ������ȣ�%d\n",sizeof(a)/sizeof(a[0]));
    printf("strlen ������ȡ�ַ�����Ч���ȣ�%d\n",strlen(a));
    
	system("pause");
	return 0;
}
