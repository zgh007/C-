#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
	
	char strSrc[128] = "hello world";
    char *strDest = (char *)malloc(128);
    
    memset(strDest,'\0',128);
    strcpy(strDest,strSrc);
    puts(strDest);
    
    memset(strDest,'\0',128);    
    strncpy(strDest,strSrc,7);
    puts(strDest);
    
    char *test = "!!!!!";
    strcat(strSrc,test);
    puts(strSrc);
    
    int ret;
    ret = strcmp(strSrc,strDest);
    printf("%d\n",ret);//相同返回0，前者assic和比后者小返回-1，前者比后者大返回1
    
	system("pause");
	return 0;
}
