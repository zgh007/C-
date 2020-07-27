#include <stdio.h>
#include <stdlib.h>
int main()
{
	
	int a = 2;
    int b = 3;
    int c = 4;
    int i;
    int *parray[3];
    
    parray[0] = &a;
    parray[1] = &b;
    parray[2] = &c;
    
    for(i = 0;i<3;i++){
		printf(" %d ",*(parray[i]));
    }
    putchar('\n');
    printf("a的地址：%p\n",&a);
    printf("存放的地址：%p\n",parray[0]);
    printf("本身指针变量的地址：%p\n",&parray[0]);
    
	system("pause");
	return 0;
}
