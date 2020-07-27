#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i;
	char a[5] = {'a','b','c','d','e'};
    for(i = 0;i<sizeof(a)/sizeof(a[0]);i++){
		printf("%c",a[i]);
    }
    putchar('\n');
    char b[5] = "abcde";
    for(i = 0;i<sizeof(b)/sizeof(b[0]);i++){
		printf("%c",b[i]);
    }
    putchar('\n');
    char c[] = "abcdef";
    for(i = 0;i<sizeof(c)/sizeof(c[0]);i++){
		printf("%c",c[i]);
    }
	putchar('\n');
    printf("数组大小:%d\n",sizeof(c)/sizeof(c[0]));
    
    char *str = "abcdef";
    i = 0;
    printf("%s\n",str);
    while(str[i] != '\0'){
		printf("%c",str[i]);
        i++;
    }
    
	system("pause");
	return 0;
}
