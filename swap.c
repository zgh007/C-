#include <stdio.h>
#include <stdlib.h>

void swap(int a,int b){

	int tmp;
    tmp = a;
    a = b;
    b = tmp;

}

void swap1(int *a,int *b){

	int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;

}

int main()
{
	
	int a = 10;
    int b = 5;
    
    //swap(a,b);
    swap1(&a,&b);
    printf("%d:%d\n",a,b);
    
	system("pause");
	return 0;
}
