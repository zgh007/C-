#include <stdio.h>
#include <stdlib.h>

int main()
{

	int a = 8;
    
    int *p;
    p = &a;
	*p = 2;
    
    printf("÷∏’Î¥Û–°£∫%d\n",sizeof(p));
    printf("a = %d\n",a);
	
	system("pause");
	return 0;
}
