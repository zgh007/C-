#include <stdio.h>
#include <stdlib.h>

void printHello(){
	printf("hello world!\n");
}

int add(int a,int b){
	return a+b;
}

int main()
{
	void (*p)();
    p = printHello;
    
    printHello();
    p();
    
    int (*padd)(int a,int b);
    padd = add;
	int ret = add(1,2);
    int ret2 = padd(1,2);
    printf("ret=%d\n",ret);
    printf("ret2=%d\n",ret2);
    
	system("pause");
	return 0;
}
