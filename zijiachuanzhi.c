#include <stdio.h>
#include <stdlib.h>

void add(int *p){
	*p = *p+1;
    printf("a = %d\n",*p);
}

int main()
{
	
	int a;
    a = 10;
    
    add(&a);
    printf("a = %d\n",a);
    
	system("pause");
	return 0;
}
