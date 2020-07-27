#include <stdio.h>
#include <stdlib.h>

void myPuts(char *p){
	while(*p != '\0'){
		putchar(*p++);
    }
    putchar('\n');
}

void myGets(char *p){
		if(p == NULL){
			printf("·Ç·¨ÄÚ´æ\n");
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

int myStrlen(char *p){
	int count = 0;
    while(*p != '\0'){
		count = count+1;
        p++;
    }
    return count;
}

void mymemset(char *p,char c,int size){
	while(size--){
		*p++ = c;
    }
}

int main()
{
	char *p = "hello";
    char *p2 = (char *)malloc(10);
    mymemset(p2,'c',10);
    myPuts(p2);
    char p1[10] = {'\0'};
    myGets(p1);
    myPuts(p1);
    printf("%d\n",myStrlen(p1));
	system("pause");
	return 0;
}
