#include <stdio.h>
#include <stdlib.h>
int main()
{
	
	int a = 9;
    
    printf("a address is %p\n",&a);
    printf("a is:%d\n",a);
    
    int *p2 = (int *)0x0060fef8;
    *p2 = 10;
    printf("%p\n",p2);
    printf("%d\n",*p2);
    printf("a is:%d\n",a);
    
	system("pause");
	return 0;
}
