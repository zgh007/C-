#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *myStrcpy(char *dest,char *src){                       //字符串拷贝strcpy
	if(dest == NULL || src == NULL){
		return NULL;
    }
    while(*src != '\0'){
		*dest++ = *src++;
    }
    *dest = '\0';
    return NULL;
}

char *myStrncpy(char *dest,char *src,int size){            //定义大小的字符串拷贝strncpy
	if(dest == NULL || src == NULL){
		return NULL;
    }
    while(*src != '\0'&&size--){
		*dest++ = *src++;
    }
    *dest = '\0';
    return dest;
}

char *myStrcat(char *dest,char *src){                      //字符串拼接strcat
	while(*dest != '\0'){
		dest++;
    }
    while(*src != '\0'){
		*dest++ = *src++;
    }
    *dest = '\0';
    return dest;
}

int myStrcmp(char *dest,char *src){                        //字符串比较strcmp
	int count1 = 0;
    int count2 = 0;
    while(*dest != '\0'){
		count1+=1;
        dest++;
    }
    while(*src != '\0'){
		count2+=1;
        src++;
    }
    if(count1>count2){
		return 1;
    }
    else if(count1 == count2){
		return 0;
    }
    else{
		return -1;
    }
}

void myPuts(char *p){                                      //字符串输出puts
	while(*p != '\0'){
		putchar(*p++);
    }
    putchar('\n');
}

void myGets(char *p){                                      //字符串输入gets
		if(p == NULL){
			printf("非法内存\n");
			return;
		}
		while(*p = getchar()){
			if(*p != '\n'){
				p++;
			}
			else{
				*p = '\0';
				return;
			}
		}
}

int myStrlen(char *p){                                     //字符串有效长度strlen
	int count = 0;
    while(*p != '\0'){
		count = count+1;
        p++;
    }
    return count;
}

void mymemset(char *p,char c,int size){                    //字符串赋值memset
	while(size--){
		*p++ = c;
    }
}

char *myStrchr(char *p,char c){                            //查找字符返回地址strchar
	while(*p != '\0'){
		if(*p == c){
			return p;
        }
        p++;
    }
}

char *myStrlwr(char *p){                                   //字符大写转小写strlwr
	while(*p != '\0'){
		if(65<=*p&&*p<=90){
			*p = *p+32;
        }
        p++;
    }
    *p = '\0';
    return p;
}

char *myStrupr(char *p){                                   //字符大写转小写strupr
	while(*p != '\0'){
		if(97<=*p&&*p<=122){
			*p = *p-32;
        }
        p++;
    }
    *p = '\0';
    return p;
}

                                                           //根据字符串返回地址strstr
                                                           //字符串的分割strtok

int main()
{
	
	//char dest[20] = {'\0'};
    char *p1 = "zhu/guo/he";
    char *parray[10] = {NULL};
    //char *src = "hello";
    //char *p = {"\0"};
    //myStrcpy(dest,src);
    //myStrncpy(dest,src,3);
    //myStrcat(dest,src);
    //int cmp = 0;
    //cmp = myStrcmp(dest,src);
    //printf("%d\n",cmp);
    //puts(dest);
    //myStrupr(dest);
    //puts(dest);
    
    
	system("pause");
	return 0;
}
