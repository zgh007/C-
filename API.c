#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
	
	char *str = "hahahaha";
    puts(str);                         //输出字符串
    printf("%s\n",str);
    
    char *str1 = (char *)malloc(128);  //注意内存泄漏
    if(str1 == NULL){                  //malloc申请空间失败
		printf("ERROR!!!\n");
        exit(-1);
    }
    memset(str1,'\0',128);          //初始化
    printf("请输入字符串：\n");
    gets(str1);                     //从键盘上扫描获取字符
    puts(str1);
    
    
	system("pause");
	return 0;
}
