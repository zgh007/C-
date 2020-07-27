#include <stdio.h>
#include <stdlib.h>
int main()
{

	int a = 8;
    char b = 'A';
    int array[3] = {1,2,3};
    int *p1 = &a;
    char *p2 = &b;
    int *p3 = &array[0];
    
    printf("a address:%p\n",&a);
    printf("指针访问a address:%p\n",p1);
    printf("指针访问++a address:%p\n",++p1);
    
    printf("b address:%p\n",&b);
    printf("指针访问b address:%p\n",p2);
    printf("指针访问++b address:%p\n",++p2);
    
    int i;
    for(i = 0;i<3;i++){
		printf(" %d ",array[i]);
    }
    
	for(i = 0;i<3;i++){
		printf(" %d ",*(p3++));
    }
    
    p3 = array;
    for(i = 0;i<3;i++){
		printf(" %d ",p3[i]);
    }
    putchar('\n');
    printf("array address:%p\n",array);
    printf("array address:%p\n",p3);
    
	system("pause");
	return 0;
}
