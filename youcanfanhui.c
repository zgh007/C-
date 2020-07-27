#include <stdio.h>
#include <stdlib.h>

int f(int x){

	int y;
    
    y = 3*x;
    printf("f:y = %d\n",y);
    
    return y;
}

int main()
{
	
	int y = 0;
    int x = 100;
    
    y = f(x);
    printf("main:y = %d\n",y);
    
	system("pause");
	return 0;
}
